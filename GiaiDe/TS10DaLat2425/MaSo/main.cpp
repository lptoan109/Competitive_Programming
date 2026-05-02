#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, a[MAXN+5], l, r, ps[MAXN+5], sf[MAXN+5], t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU3.INP", "r", stdin);
    freopen("CAU3.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = max(ps[i-1], a[i]);
    }
    for(ll i = n; i>=1; --i){
        sf[i] = max(sf[i+1], a[i]);
    }
    for(ll i = 1; i<n; ++i){
        if(ps[i]+sf[i+1]>t){
            t = ps[i]+sf[i+1];
            l = ps[i];
            r = sf[i+1];
        }
    }
    cout << l << r;
    return 0;
}
