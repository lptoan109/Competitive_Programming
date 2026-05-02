#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
const ll mod = 1e9+7;
ll dp[MAXN+5], n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    dp[0] = 1;
    for(ll i = 1; i<=n; ++i){
        for(ll j = 1; j<=6; ++j){
            if(i-j>=0){
                dp[i] = (dp[i]+dp[i-j])%mod;
            }
        }
    }
    cout << dp[n];
    return 0;
}
