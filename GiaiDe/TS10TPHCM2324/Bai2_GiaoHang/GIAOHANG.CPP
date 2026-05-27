#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.fi == b.fi) return a.se<b.se;
    return a.fi<b.fi;
}
int n, m;
long long kq;
vector<pair<int, int>> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GIAOHANG.INP", "r", stdin);
    freopen("GIAOHANG.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        int l, r;
        cin >> l >> r;
        if(l>r){
            a.push_back({r, l});
        }
    }
    kq = m;
    if(!a.empty()){
        sort(a.begin(), a.end(), compare);
        int curl = a[0].fi, curr = a[0].se;
        n = a.size();
        for(int i = 1; i<n; ++i){
            if(a[i].fi <=curr){
                curr = max(a[i].se, curr);
            }
            else{
                kq+=2LL*(curr-curl);
                curr = a[i].se;
                curl = a[i].fi;
            }
        }
        kq +=2LL*(curr-curl);
    }
    cout << kq;
    return 0;
}
