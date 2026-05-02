#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
const ll mod = 1e9+7;
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
        for(ll j = 1; j<=n; ++j){
            if(i-a[j]<0 || dp[i-a[j]]==0) continue;
//            if(a[j]==i-a[j]) dp[i]= (dp[i]%mod+dp[i-a[j]]%mod)%mod;
//            else dp[i]= (dp[i]%mod+dp[i-a[j]]%mod+dp[a[j]]%mod)%mod;
            dp[i]= (dp[i]%mod+dp[i-a[j]]%mod)%mod;
            //cout << i << " : " << dp[i] << "\n";
        }
    }
    //for(ll i = 1; i<=x; ++i) cout << dp[i] << " ";
    //cout << "\n";
    cout << dp[x];
    return 0;
}
