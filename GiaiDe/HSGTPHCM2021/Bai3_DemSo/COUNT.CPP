#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n,x,q, a[MAXN+5], ps[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("COUNT.INP", "r", stdin);
    freopen("COUNT.OUT", "w", stdout);
    cin >> n >> x >> q;
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        if(t>0 && t<x){
            a[i]++;
        }
    }
    for(ll i = 1; i<=n; ++i){
        ps[i] = ps[i-1]+a[i];
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        cout << ps[r] - ps[l-1] << "\n";
    }
    return 0;
}
