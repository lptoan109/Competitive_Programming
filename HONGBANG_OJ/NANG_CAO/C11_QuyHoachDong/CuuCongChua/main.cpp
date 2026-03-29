#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HELP.INP", "r", stdin);
    freopen("HELP.OUT", "w", stdout);
    cin >> t;
    while(t--){
        const int MAXN = 1e4;
        ll n, dp[MAXN+5], a[MAXN+5];
        bool vkq[MAXN+5];
        vector<ll> kq;
        cin >> n;
        for(ll i = 1; i<=n; ++i){
            dp[i] = 0;
            vkq[i] = false;
            cin >> a[i];
        }
        dp[0] = 0;
        dp[1] = a[1];
        vkq[1] = true;
        if(n == 1){
            cout << dp[1] << "\n" << a[1] << "\n";
            continue;
        }
        if(a[2]>dp[1]){
            dp[2] = a[2];
            vkq[2] = true;
        }
        else{
            dp[2] = dp[1];
            vkq[2] = false;
        }
        if(n==2){
            cout << dp[2] << "\n";
            if(a[2]>dp[1]){
                cout << a[2] << "\n";
            }
            else{
                cout << a[1] << "\n";
            }
            continue;
        }
        for(ll i = 3; i<=n; ++i){
            if(a[i]+dp[i-2] > dp[i-1]){
                dp[i] = a[i]+dp[i-2];
                vkq[i] = true;
            }
            else{
                dp[i] = dp[i-1];
                vkq[i] = false;
            }
        }
        cout << dp[n] << "\n";
        ll k = n;
        while(k>=1){
            if(vkq[k]){
                kq.push_back(k);
                k-=2;
            }
            else{
                k--;
            }
        }
        sort(kq.begin(), kq.end());
        for(ll i:kq){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
