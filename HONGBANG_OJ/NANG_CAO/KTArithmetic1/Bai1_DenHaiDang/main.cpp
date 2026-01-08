#include <bits/stdc++.h>
using namespace std;
long long l,r;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LIGHT.INP", "r", stdin);
    freopen("LIGHT.OUT", "w", stdout);
    cin >> l >> r;
    long long kq = (r/3) - ((l-1)/3);
    kq = kq - ((r/6) - ((l-1)/6));
    cout << kq;
    return 0;
}
