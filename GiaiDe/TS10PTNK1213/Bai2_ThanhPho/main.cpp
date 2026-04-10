#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 500;
ll m, n, k, a[MAXN+5][MAXN+5], ps[MAXN+5][MAXN+5];
unordered_map<ll, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CITY.INP", "r", stdin);
    freopen("CITY.OUT", "w", stdout);
    cin >> m >> n >> k;
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            if(i==1){
                if(j==1){
                    ps[i][j] = a[i][j+1] + a[i+1][j+1] + a[i+1][j];
                    continue;
                }
                if(j==n){
                    ps[i][j] = a[i][j-1]+a[i+1][j-1]+a[i+1][j];
                    continue;
                }
                ps[i][j] = a[i][j-1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]+a[i][j+1];
                continue;
            }
            if(i==m){
                if(j==1){
                    ps[i][j] = a[i-1][j]+a[i-1][j+1]+a[i][j+1];
                    continue;
                }
                if(j==n){
                    ps[i][j] = a[i-1][j]+a[i-1][j-1]+a[i][j-1];
                    continue;
                }
                ps[i][j] = a[i][j-1]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j+1];
                continue;
            }
            if(j==1){
                if((i==1&&j==1)||(i==m&&j==1)) continue;
                ps[i][j] = a[i-1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1]+a[i+1][j];
                continue;
            }
            if(j==n){
                if((i==1&&j==n)||(i==m&&j==n)) continue;
                ps[i][j] = a[i-1][j]+a[i-1][j-1]+a[i][j-1]+a[i+1][j-1]+a[i+1][j];
                continue;
            }
            ps[i][j] = a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j-1] + a[i][j+1] + a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
        }
    }
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            //cout << ps[i][j] << " ";
            cnt[ps[i][j]]++;
        }
        //cout << "\n";
    }
    for(ll i = 1; i<=k; ++i){
        ll t;
        cin >> t;
        if(cnt.find(t)!=cnt.end()){
            cout << 1 << " ";
        }
        else{
            cout << 0 << " ";
        }
    }
    return 0;
}
