#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 5e2;
ll n, a[MAXN+5], dp[MAXN+5], s[MAXN+5], t, kq = 1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CANDY.INP", "r", stdin);
    freopen("CANDY.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        t+=a[i];
    }
    sort(a+1, a+1+n);
    s[1] = a[1];
    dp[1] = t-a[1];
    for(ll i = 2; i<=n; ++i){
        ll temp = 1e18, tong;
        for(ll j = 1; j<i; ++j){
            if(abs((t-(a[i]+s[j]))-(a[i]+s[j])) <= temp){
                temp = abs((t-(a[i]+s[j]))-(a[i]+s[j]));
                tong = s[j]+a[i];
            }
        }
        dp[i] = temp;
        s[i] = tong;
    }
    for(ll i = 1; i<=n; ++i){
        kq = min(kq, dp[i]);
    }
    cout << kq;
    return 0;
}
