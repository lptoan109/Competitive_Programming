#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c,d,e, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d >> e;
    kq+= (a*c*d);
    kq+=(b*(e-(c*d)));
    cout << kq;
    return 0;
}
