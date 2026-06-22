#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n, a[MAXN+5], b[MAXN+5], ca[MAXN+5], cb[MAXN+5], dp[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(ll i = 1; i<=n; ++i){
        cin >> b[i];
    }
    if(a[1] >= b[1]){
        dp[1] = a[1];
        ca[1] = 1;
    }
    else{
        dp[1] = b[1];
        cb[1] = 1;
    }
    for(ll i = 2; i<=n; ++i){
        if(a[i]>=b[i] && ca[i-1]<2){
            dp[i] = dp[i-1]+a[i];
            ca[i] = ca[i-1]+1;
        }
        else if(cb[i-1]<2){
            dp[i] = dp[i-1]+b[i];
            cb[i] = cb[i-1]+1;
        }
        else if(ca[i-1]<2){
            dp[i] = dp[i-1]+a[i];
            ca[i] = ca[i-1]+1;
        }
    }
    cout << dp[n];
    return 0;
}
