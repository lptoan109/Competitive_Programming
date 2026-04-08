#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 250;
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
            if(i==1 && j==1){
                ps[i][j] = a[i][j+1] + a[i+1][j+1] + a[i+1][j];
                continue;
            }

        }
    }
    return 0;
}
