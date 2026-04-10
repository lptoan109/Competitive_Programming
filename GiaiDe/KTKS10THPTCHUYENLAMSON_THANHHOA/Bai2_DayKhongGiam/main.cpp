#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5], t;
bool check[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n;
        bool checkdk = true;
        cin >> n;
        for(int i = 1; i<=n; ++i){
            cin >> a[i];
            check[i] = false;
        }
        for(int i = 2; i<=n; ++i){
            if(a[i]<a[i-1] && check[i-1]==false){
                a[i-1]--;
                check[i-1] = true;
            }
            if(a[i]<a[i-1] && check[i]==false){
                a[i]++;
                check[i] = true;
            }
            if(a[i]<a[i-1]){
                checkdk = false;
                break;
            }
        }
        if(checkdk) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
