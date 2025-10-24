#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
vector <ll> a;
multiset <ll>b;

ll n, m, t, d = 0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("SINHNHAT.INP","r", stdin);
    //freopen("SINHNHAT.OUT","w", stdout);
    cin >> n >> m;
    for(int i = 0; i<n; ++i){
        cin >> t;
        a.push_back(t);
    }
    for(int i = 0; i<m; ++i){
        cin >> t;
        b.insert(t);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i<n; ++i){
        auto d2 = b.upper_bound(a[i]);
        auto d1 = b.lower_bound(a[i]);
        if(d1 == b.end()||d2==b.end()) continue;
        else{
            d++;
            b.erase(d2);
            b.erase(d1);
        }
    }
    cout << d;
    return 0;
}
