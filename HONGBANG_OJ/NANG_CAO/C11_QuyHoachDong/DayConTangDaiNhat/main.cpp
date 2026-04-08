#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 2e4;
ll a[MAXN+5], pos[MAXN+5], n;
vector<ll> dp, vkq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUBMAX.INP", "r", stdin);
    freopen("SUBMAX.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp.push_back(a[1]);
    for(ll i = 2; i<=n; ++i){
        auto it = lower_bound(dp.begin(), dp.end(), a[i]);
        ll p = distance(dp.begin(), it);
        if(it == dp.end()) dp.push_back(a[i]);
        else{
            *it = a[i];
        }
        pos[i] = p;
    }
    ll kq = dp.size();
    cout << kq << "\n";
    ll vt = pos[n];
    while(vt>0){

    }
    return 0;
}
