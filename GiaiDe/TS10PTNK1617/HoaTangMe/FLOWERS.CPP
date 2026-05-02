#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define ll long long
bool compare(pair<ll,ll>a, pair<ll, ll>b){
    return a.se<b.se;
}
const int MAXN = 1e6;
ll n, m, s, kqt = -1e18;
pair<ll, ll> a[MAXN+5], kq;
bool check;
ll binsearch(ll t){
    ll l = 1, r = n, solt = 0;
    while(l<=r){
        ll m = l+(r-l)/2;
        if(a[m].se<=s-t){
            solt = m;
            l = m+1;
        }
        else r = m-1;
    }
    return solt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FLOWERS.INP", "r", stdin);
    freopen("FLOWERS.OUT", "w", stdout);
    cin >> n >> m >> s;
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        a[i] = {i, t};
    }
    sort(a+1, a+1+n, compare);
    for(ll i = 1; i<=m; ++i){
        ll t;
        cin >> t;
        ll val = binsearch(t);
        if(val != 0){
            check = true;
            if(a[val].se>kqt-t){
                kq.fi = a[val].fi;
                kq.se = i;
                kqt = a[val].se+t;
            }
        }
    }
    if(!check){
        cout << 0 << " " << 0;
        return 0;
    }
    cout << kq.fi << " " << kq.se;
    return 0;
}
