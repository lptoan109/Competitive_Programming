#include <bits/stdc++.h>
using namespace std;
int a,b,c,x, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> x;
    t = a+b+c;
    int na = min(t-x, a);
    a-=na;
    t-=na;
    int nb = min(t-x, b);
    b-=nb;
    t-=nb;
    c-=(t-x);
    cout << a << "\n" << b << "\n" << c;
    return 0;
}
