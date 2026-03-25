#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, a[MAXN];
vector <ll> dp;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DONGGOI.INP", "r", stdin);
    freopen("DONGGOI.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp.push_back(a[1]);
    for(ll i = 2; i<=n; ++i){
        if(dp.back()<a[i]) dp.push_back(a[i]);
        else{
            auto it = lower_bound(dp.begin(), dp.end(), a[i]);
            if(it!=dp.end()) *it = a[i];
        }
    }
    cout << dp.size();
    return 0;
}
