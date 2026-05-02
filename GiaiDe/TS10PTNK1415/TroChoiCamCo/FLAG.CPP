#include <bits/stdc++.h>
using namespace std;
long long t1, t2, t3, kq, remain;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FLAG.INP", "r", stdin);
    freopen("FLAG.OUT", "w", stdout);
    cin >> t1 >> t2 >> t3;
    remain = (t1+t2*2+t3*3)/4;
    long long take3 = min(remain, t3);
    kq += take3;
    remain -= take3;
    long long take2 = min(remain, t2);
    kq += take2*2;
    remain-=take2;
    kq+=remain*3;
    cout << kq;
    return 0;
}
