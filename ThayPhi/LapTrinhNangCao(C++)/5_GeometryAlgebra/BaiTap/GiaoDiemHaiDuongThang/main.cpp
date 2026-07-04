#include <bits/stdc++.h>
using namespace std;
double a1, b1, a2, b2, c1, c2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    double d = a1*b2 - b1*a2, dx = b1*c2 - c1*b2, dy = c1*a2 - a1*c2;
    cout << fixed<< setprecision(6) << dx/d << ' ' << dy/d;
    return 0;
}
