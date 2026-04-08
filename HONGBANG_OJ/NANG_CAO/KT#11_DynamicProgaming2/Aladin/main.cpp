#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e3;
ll n, k, a[MAXN+5], dp[MAXN+5], trace[MAXN+5], kq, vtkq;
vector<ll> vkq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ALADDIN.INP", "r", stdin);
    freopen("ALADDIN.OUT", "w", stdout);
    cin >> n >> k;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp[1] = a[1];
    for(ll i = 2; i<=n; ++i){
        ll t = 0;
        bool check = true;
        for(ll j = 1; j<i; ++j){
            if(a[i]>a[j]){
                if(a[i]-a[j]<=k){
                    if(dp[j]>=t){
                        t = dp[j];
                        trace[i] = j;
                        check = false;
                    }
                }
            }
        }
        dp[i] = a[i]+t;
        if(check){
            trace[i] = 0;
        }
    }
    for(ll i = 1; i<=n; ++i){
        if(dp[i]>=kq){
            kq = dp[i];
            vtkq = i;
        }
    }
    vkq.push_back(vtkq);
    ll t = trace[vtkq];
    while(t>0){
        vkq.push_back(t);
        t = trace[t];
    }
    sort(vkq.begin(), vkq.end());
    cout << kq << "\n";
    for(ll i:vkq){
        cout << a[i] << " ";
    }
    return 0;
}
