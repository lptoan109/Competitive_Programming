#include <bits/stdc++.h>
using namespace std;
int x, y, m, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);
    cin >> x >> y >> m;
    int gh = m/x;
    for(int i = 1; i<=gh; ++i){
        int ls = x*i;
        int ghy = (m-ls)/y;
        kq = max(kq, ls+ y*ghy);
    }
    cout << kq;
    return 0;
}
