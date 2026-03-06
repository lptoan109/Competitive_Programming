#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 1e6, mod = 26051968;
ll a[MAXN+5], n,k;
bool hu[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BACTHANG.INP", "r", stdin);
    freopen("BACTHANG.OUT", "w", stdout);
    cin >> n >> k;
    if(!hu[1]) a[1] = 1;
    if(!hu[2]) a[2] = a[1]+1;
    for(ll i  = 3; i<=n; ++i){
        if(hu[i]){
            a[i] = 0;
            continue;
        }
        a[i] = (a[i-1]+a[i-2])%mod;
    }
    cout << a[n];
    return 0;
}
