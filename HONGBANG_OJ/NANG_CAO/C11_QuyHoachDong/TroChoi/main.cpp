#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, k, a[MAXN+5], dp[MAXN+5], vtdp[MAXN+5], vmax;
vector<ll>vkq;
deque <ll> dq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp[0] = 0;
    vtdp[1] = 0;
    dq.push_back(0);
    if(n==1){
        cout << a[1] << "\n";
        cout << a[1];
        return 0;
    }
    for(ll i = 1; i<=n; ++i){
        if(!dq.empty() && dq.front()<i-k) dq.pop_front();
        dp[i] = a[i]+dp[dq.front()];
        vtdp[i] = dq.front();
        while(!dq.empty() && dp[dq.back()] <= dp[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    vmax = 1;
    for(ll i = 2; i<=n; ++i){
        if(dp[i]>dp[vmax]) vmax = i;
    }
    cout << dp[vmax] << "\n";
    ll j = vmax;
    while(j>0){
        vkq.push_back(j);
        j = vtdp[j];
    }
    sort(vkq.begin(), vkq.end());
    for(ll i:vkq) cout << a[i] << " ";
    return 0;
}
