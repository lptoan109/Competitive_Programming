#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node {
    ll t, v;
    bool operator<(const node& ot) const {
        return t < ot.t;
    }
};
ll n, a, b, res = 0;
vector<node> d;
priority_queue<ll> pq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PROMO.INP", "r", stdin);
    freopen("PROMO.OUT", "w", stdout);
    cin >> n >> a >> b;
    for(ll i = 0; i < n; ++i){
        ll t, v;
        cin >> t >> v;
        d.push_back({t, v});
    }
    sort(d.begin(), d.end());
    ll j = 0;
    for(ll i = a; i <= b; ++i){
        while(j < n && d[j].t < i){
            pq.push(d[j].v);
            j++;
        }
        if(!pq.empty()){
            res += pq.top();
            pq.pop();
        }
    }
    cout << res;
    return 0;
}
