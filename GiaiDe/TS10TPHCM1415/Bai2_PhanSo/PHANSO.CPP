#include <bits/stdc++.h>
using namespace std;
string n, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PHANSO.INP", "r", stdin);
    freopen("PHANSO.OUT", "w", stdout);
    cin >>n >> t;
    string so = n+t;
    long long ms = pow(10, t.size());
    long long ts = stoll(so);
    long long rg = __gcd(ts, ms);
    cout << ts/rg << " " << ms/rg;
    return 0;
}
