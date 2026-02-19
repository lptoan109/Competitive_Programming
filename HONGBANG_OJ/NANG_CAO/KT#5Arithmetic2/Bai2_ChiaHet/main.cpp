#include <bits/stdc++.h>
using namespace std;
long long n, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CHIAHET.INP", "r", stdin);
    freopen("CHIAHET.OUT", "w", stdout);
    cin >> n;
    kq = n;
    kq -= ((n/2)+(n/3)+(n/5)+(n/7));
    kq += ((n/(2*3))+(n/(2*5))+(n/(2*7))+(n/(3*5))+(n/(3*7))+(n/(5*7)));
    kq -= ((n/(2*3*5))+(n/(7*3*5))+(n/(2*3*7))+(n/(2*7*5)));
    kq += (n/(2*3*5*7));
    cout << kq;
    return 0;
}
