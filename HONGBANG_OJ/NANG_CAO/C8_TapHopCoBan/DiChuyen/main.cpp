#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
unsigned long long x,y,z;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TH04.INP", "r", stdin);
    freopen("TH04.OUT", "w", stdout);
    cin >> x >> y >> z;
    unsigned long long kq = ((x%mod)*(y%mod)*(z%mod))%mod;
    cout << (kq*6)%mod;
    return 0;
}
