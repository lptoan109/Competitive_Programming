#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
bool fre[MAXN+5];
int n, q, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i =1; i<=n; ++i) cin >> a[i];
    while(q--){
        int t, kq = 0;
        cin >> t;
        for(int i = 1; i<=n; ++i){
            if(a[i]>t){
                fre[i] = true;
            }
            //cout << fre[i] << " ";
        }
        int i = 1;
        while(i<=n){
            if(fre[i]){
                kq++;
                i++;
                while(i<=n && fre[i]) i++;
            }
            i++;
        }
        cout << kq << "\n";
        for(int i = 1; i<=n; ++i) fre[i] = false;
    }
    return 0;
}
