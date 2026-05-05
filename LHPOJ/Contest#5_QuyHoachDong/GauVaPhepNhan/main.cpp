#include <bits/stdc++.h>
using namespace std;
#define ll __int128
const int MAXN = 1e3;
ll n, p[MAXN+5], ps[MAXN+5], kq = -1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> ps[i];
    }
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        ps[i]*=t;
    }
    for(ll i = 1; i<=n; ++i){
        p[i] = p[i-1]+ps[i];
    }
    for(ll i = 2; i<=n; ++i){
        for(ll j = 1; j<i; ++j){
            kq = max(kq, p[i]-p[j-1]);
        }
    }
    cout << kq;
    return 0;
}
