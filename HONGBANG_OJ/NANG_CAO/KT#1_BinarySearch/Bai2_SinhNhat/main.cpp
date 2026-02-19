#include <bits/stdc++.h>
using namespace std;
#define ll int

const int MAXN = 1e6;
ll a[MAXN+5], m , n , kq = 0, t;
multiset <ll>b;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("SINHNHAT.INP","r", stdin);
    //freopen("SINHNHAT.OUT","w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 1; i<=m; ++i){
        cin >> t;
        b.insert(t);
    }
    for(int i = 1; i<=n; ++i){
        auto d2 = upper_bound(b.begin(), b.end(), a[i]);
        if(d2==b.end()) continue;
        auto d1 = lower_bound(b.begin(), b.end(), a[i]);
        if(d1==b.begin()) continue;
        d1--;
        kq++;
        b.erase(d1); b.erase(d2);
    }
    cout << kq;
    return 0;
}
