#include <bits/stdc++.h>
using namespace std;
int a,b,x,y;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);
    cin >> a >> b >> x >> y;
    int s1 = min(a, b), s2 = max(a, b), s3 = min(x, y), s4 = max(x, y);
    int th1 = abs(s1-s2), th2 = abs(s1-s3)+abs(s2-s4);
    cout << min(th1, th2);
    return 0;
}
