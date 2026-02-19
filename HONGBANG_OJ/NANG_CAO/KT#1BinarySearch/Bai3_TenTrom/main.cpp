#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll a[MAXN+5], n , k, ln = INT_MIN, nn = INT_MAX;

bool kt(ll n, ll k, ll m){
    ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TENTROM.INP", "r", stdin);
    freopen("TENTROM.OUT", "w", stdout);
    cin >> n >> k;
    ll l,r;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(a[i]>ln){
            ln = a[i];
            r = i;
        }
        if(a[i]<nn){
            nn = a[i];
            l = i;
        }
    }
    for(ll i=1; i<=n; ++i){
        ll m = l+(r-l)/2;
        if(a[i]<=m){
            k--;
            d++;
        }

    }
    return 0;
}
