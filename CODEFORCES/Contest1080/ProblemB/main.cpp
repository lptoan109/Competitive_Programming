#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];
        for(int i = 1; i<=n; ++i){
            cin >> a[i];
        }
        for(int i = 1; i<=n/2; ++i){
            if(2*i<=n){
                if(a[i]>a[i*2]){
                    //cout << i*2 << " ";
                    swap(a[i], a[i*2]);
                }
            }
        }
        //cout << "\n";
        bool check = true;
        for(int i = 2; i<=n; ++i){
            if(a[i]<a[i-1]){
                check = false;
                break;
            }
        }
        if(check ) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
