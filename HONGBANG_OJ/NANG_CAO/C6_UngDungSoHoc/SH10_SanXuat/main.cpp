#include <bits/stdc++.h>
using namespace std;
long long u,d, n, kq1, kq2;
const long long mod = 1e9+7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SANXUAT.INP", "r", stdin);
    freopen("SANXUAT.OUT", "w", stdout);
    cin >> u >> d >> n;
    kq1 = ((u%mod)+((n-1)%mod)*(d%mod))%mod;
    kq2 = (((n%mod)*(u+kq1)%mod)*((mod+1)/2))%mod;
    cout << kq1 << "\n" << kq2;
    return 0;
}
