#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e2;
ll n, a[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LIGHTS.INP", "r", stdin);
    freopen("LIGHTS.OUT", "w", stdout);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        a[t]++;
    }
    for(ll i = 1; i<=MAXN; ++i){
        kq = max(kq, a[i]);
    }
    if(kq<n) kq++;
    else kq--;
    cout << kq;
    return 0;
}
