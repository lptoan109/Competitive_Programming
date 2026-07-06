#include <bits/stdc++.h>
using namespace std;
long long n, a, b, x, y;
int main()
{
    cin >> n >> a >> b >> x >> y;
    int d = n/(a*b/__gcd(a, b));
    int da = n/a-d;
    int db = n/b-d;
    cout << x*da + y*db + max(x, y)*d;
    return 0;
}
