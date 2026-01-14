#include <bits/stdc++.h>
using namespace std;
long long n, kq = 0, t = 1;
void squyluat(long long s){
    if(s<1) return;
    kq+=((s*s)*t);
    t=kq;
    return squyluat(s-1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ06.INP", "r", stdin);
    freopen("DQ06.OUT", "w", stdout);
    cin >> n;
    squyluat(n);
    cout << kq;
    return 0;
}
