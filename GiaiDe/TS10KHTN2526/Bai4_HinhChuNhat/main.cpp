#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second
const int MAXN = 1e5;
ll n, dp[MAXN+5], kq = 1;
pair<ll, ll> a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        ll d,r;
        cin >> d >> r;
        a[i] = {d, d*r};
    }
    dp[1] = 1;
    for(ll i = 2; i<=n; ++i){
        bool check = false;
        ll vt = 0;
        for(int j = i-1; j>=1; --j){
            if((a[j].se > a[i].se)||(a[j].se == a[i].se && a[j].fi>a[i].fi)){
                check = true;
                vt = max(vt, dp[j]);
            }
        }
        if(check){
            dp[i] = vt+1;
        }
        else{
            dp[i] = 1;
        }
    }
    for(ll i = 1; i<=n; ++i){
        kq = max(kq, dp[i]);
    }
    cout << kq;
    return 0;
}
