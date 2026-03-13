#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5, mod = 1e9+7;
int n,k, t, a[MAXN+5];
void sub1(){
    int kq = 0;
    if(k==2){
        for(int i = 1; i<n; ++i){
            for(int j = i+1; j<=n; ++j){
                kq=(kq+max(a[i],a[j]))%mod;
            }
        }
    }
    else{
        for(int i = 1; i<n-1; ++i){
            for(int j = i+1; j<n; ++j){
                for(int t = j+1; t<=n; ++t){
                    kq = (kq+max({a[i],a[j],a[t]}))%mod;
                }
            }
        }
    }
    cout << kq;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XOSO.INP", "r", stdin);
    freopen("XOSO.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        t+=a[i];
    }
    if(k==1){
        cout << t%mod;
        return 0;
    }
    if(k<=3){
        sub1();
        return 0;
    }
    return 0;
}
