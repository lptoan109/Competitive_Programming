#include <bits/stdc++.h>
using namespace std;
#define int long long
int vt[4][5], kq;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LAMVUON.INP", "r", stdin);
    freopen("LAMVUON.OUT", "w", stdout);
    for(int i = 1; i<=3; ++i){
        int l,d,r,u;
        cin >> l >> d >> r >> u;
        vt[i][1] = l;
        vt[i][2] = d;
        vt[i][3] = r;
        vt[i][4] = u;
    }
    int maxl = max({vt[1][1], vt[2][1], vt[3][1]}), minr = min({vt[1][3], vt[2][3], vt[3][3]});
    int d = max(kq, minr-maxl);
    int maxd = max({vt[1][2], vt[2][2], vt[3][2]}), minu = min({vt[1][4], vt[2][4], vt[3][4]});
    int r = max(kq, minu-maxd);
    cout << d*r;
    return 0;
}
