#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, a[105], dp[MAXN+5], x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        dp[a[i]] = 1;
    }
    for(ll i = 1; i<=x; ++i){
        if(dp[i]==1) continue;
        ll t = 1e9;
        bool check = false;
        for(ll j = 1; j<=n; ++j){
            if(i-a[j]<0 || dp[i-a[j]]==0) continue;
            t = min(t,dp[i-a[j]]+dp[a[j]]);
            check = true;
        }
        if(check) dp[i] = t;
    }
//    for(ll i = 1; i<=x; ++i) cout << dp[i] << " ";
//    cout << "\n";
    if(dp[x]==0) cout << -1;
    else cout << dp[x];
    return 0;
}
