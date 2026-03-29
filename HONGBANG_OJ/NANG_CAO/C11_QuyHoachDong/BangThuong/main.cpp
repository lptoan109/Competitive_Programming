#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool compare(pair<ll, ll> a, pair<ll, ll> b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
const int MAXN = 1e3;
ll m,n, a[MAXN+5][MAXN+5], dp[MAXN+5][MAXN+5], sl[MAXN+5][MAXN+5];
vector<pair<ll, ll>> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DP08.INP", "r", stdin);
    freopen("DP08.OUT", "w", stdout);
    cin >> m >> n;
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    dp[1][1] = a[1][1];
    sl[1][1] = 1;
    if(m == 1&&n == 1){
        cout << dp[1][1] << "\n" << 1 << "\n" << "1 1";
        return 0;
    }
    for(ll i = 2; i<=n; ++i){
        dp[1][i] = dp[1][i-1] + a[1][i];
        sl[1][i] = sl[1][i-1]+1;
    }
    for(ll i = 2; i<=m; ++i){
        dp[i][1] = dp[i-1][1] + a[i][1];
        sl[i][1] = sl[i-1][1]+1;
    }
    for(ll i = 2; i<=m; ++i){
        for(ll j = 2; j<=n; ++j){
            if(dp[i][j-1] >= dp[i-1][j]){
                dp[i][j] = dp[i][j-1] + a[i][j];
                sl[i][j] = sl[i][j-1]+1;
            }
            else{
                dp[i][j] = dp[i-1][j] + a[i][j];
                sl[i][j] = sl[i-1][j]+1;
            }
        }
    }
//    for(ll i = 1; i<=m; ++i){
//        for(ll j = 1; j<=n; ++j){
//            cout << dp[i][j] << " ";
//        }
//        cout << "\n";
//    }
    cout << dp[m][n] << "\n" << sl[m][n] << "\n";
    ll k1 = m, k2 = n;
    kq.push_back({k1, k2});
    while(k1>=1 && k2>=1){
        if(dp[k1][k2-1] > dp[k1-1][k2]){
            kq.push_back({k1, k2-1});
            k2-=1;
        }
        else{
            kq.push_back({k1-1, k2});
            k1-=1;
        }
    }
    kq.pop_back();
    sort(kq.begin(), kq.end(), compare);
    for(auto &i:kq){
        cout << i.first << " " << i.second << "\n";
    }
    return 0;
}
