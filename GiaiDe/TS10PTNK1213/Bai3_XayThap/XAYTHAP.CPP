#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct dl{
    ll d1;
    ll d2;
    ll val;
};
bool compare(dl a, dl b){
    return a.d1*a.d2 < b.d1*b.d2;
}
const int MAXN = 100;
ll n, dp[MAXN+5], kq;
dl a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XAYTHAP.INP", "r", stdin);
    freopen("XAYTHAP.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        ll t1, t2, gt;
        cin >> t1 >> t2 >> gt;
        a[i] = {min(t1, t2), max(t1, t2), gt};
    }
    sort(a+1, a+1+n, compare);
    //for(ll i = 1; i<=n; ++i) cout << a[i]. d1 << " " << a[i].d2 << " " << a[i].val << "\n";
    dp[1] = a[1].val;
    for(ll i = 2; i<=n; ++i){
        ll t = 0;
        for(ll j = 1; j<i; ++j){
            if(a[j].d1<=a[i].d1 && a[j].d2<=a[i].d2){
                t = max(t, dp[j]);
            }
        }
        dp[i] = a[i].val + t;
    }
    for(ll i = 1; i<=n; ++i){
        //cout << dp[i] << " ";
        kq = max(kq, dp[i]);
    }
    //cout << "\n";
    cout << kq;
    return 0;
}
