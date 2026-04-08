#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, t[MAXN+5], r[MAXN+5], dp[MAXN+5];
vector <ll> vkq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MUAVE.INP", "r", stdin);
    freopen("MUAVE.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> t[i];
    }
    for(int i = 2; i<=n; ++i){
        cin >> r[i];
    }
    if(n==1){
        cout << t[1];
        return 0;
    }
    dp[1] = t[1];
    if(r[2] < (dp[1]+t[2])){
        dp[2] = r[2];
        vkq.push_back(2);
    }
    else{
        dp[2] = dp[1]+t[2];
    }
    for(int i = 3; i<=n; ++i){
        if(r[i]+dp[i-2] < dp[i-1]+t[i]){
            dp[i] = r[i]+dp[i-2];
            vkq.push_back(i);
        }
        else{
            dp[i] = dp[i-1]+t[i];
        }
    }
    cout << dp[n];
    cout << "\n";
    for(ll i: vkq) cout << i << " ";
    return 0;
}
