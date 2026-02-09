#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
#define int long long
int n,k;
set<int> a;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU4.INP", "r", stdin);
    freopen("CAU4.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=k; ++i){
        int t;
        cin >> t;
        for(int i = 1; i*i<=t; ++i){
            if(t%i==0){
                a.insert(i);
                a.insert(t/i);
            }
        }
    }
    vector<int> dp(n+1,0);
    vector<int> step(a.begin(), a.end());
    dp[1] = 1;
    for(int i = 2; i<=n; ++i){
        for(int j:step){
            if(i-j>=1) dp[i] = (dp[i]+dp[i-j])%mod;
            else break;
        }
    }
    cout << dp[n];
    return 0;
}
