#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct tam{
    ll t1;
    vector<ll> t2;
};
bool compare(tam a, tam b){
    return a.t2[0]<b.t2[0];
}
map<ll, vector<ll>>a;
vector<tam> ds;
ll n, kq, kqt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MONITOR.INP", "r", stdin);
    freopen("MONITOR.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        a[t].push_back(i);
    }
    for(auto &i:a){
        sort(i.second.begin(), i.second.end());
        ll tam1 = i.first;
        vector<ll> tam2 = i.second;
        ds.push_back({tam1, tam2});
    }
    sort(ds.begin(), ds.end(), compare);
    for(auto &i:ds){
        if(abs(i.t2.back()-i.t2[0])+1>kq){
            //cout << i.first << " ";
            //cout << abs(i.second.back()-i.second[0])+1 << "\n";
            kqt = i.t1;
            kq = abs(i.t2.back()-i.t2[0])+1;
        }
    }
    cout << kqt << "\n" << kq;
    return 0;
}
