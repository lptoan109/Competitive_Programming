#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int n,k;
map<int , int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=k; ++i){
        int t;
        cin >> t;
        a[t]++;
    }
    vector <int> dp(n+1,0);
    dp[0]= 1;
    for(int i = 1; i<=n; ++i){
        if(a.find(i)==a.end()){
            dp[i] = (dp[i]+dp[i-1])%mod;
            if(i>=2) dp[i] = (dp[i]+dp[i-2])%mod;
        }
        else dp[i] = 0;
    }
    cout << dp[n];
    return 0;
}
