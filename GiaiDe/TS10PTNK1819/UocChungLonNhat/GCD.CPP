#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll a[MAXN+5], n, k, kq;
void sub1(){
    for(ll i = 1; i<=n; ++i) cin >> a[i];
    for(ll i = k; i<=n; ++i){
        ll t = a[i];
        for(ll j = i-k+1; j<i; ++j){
            t = __gcd(t, a[j]);
        }
        kq = max(kq, t);
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GCD.INP", "r", stdin);
    freopen("GCD.OUT", "w", stdout);
    cin >> n >> k;
    if(n<=1000){
        sub1();
        return 0;
    }
    return 0;
}
