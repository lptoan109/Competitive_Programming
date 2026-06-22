#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e3;
ll n, a[MAXN+5], dp[MAXN+5], kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n;
    for(ll i = 1; i<=n; ++i) cin >> a[i];
    dp[1] = 1;
    for(ll i = 2; i<=n; ++i){
        ll maxx = 0;
        for(ll j = 1; j<=i; ++j){
            if(a[j]<a[i]) maxx = max(maxx, dp[j]);
        }
        dp[i] = maxx+1;
    }
    for(ll i = 1; i<=n; ++i){
        kq = max(kq, dp[i]);
    }
    cout << kq;
    return 0;
}
