#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, ax[MAXN+5],ay[MAXN+5], k, kq;;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("POLY.INP", "r", stdin);
    freopen("POLY.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        int c;
        cin >> c;
        int maxx, maxy;
        maxx = maxy  = -2e9;
        while(c--){
            int x,y;
            cin >> x >> y;
            maxx = max(x, maxx);
            maxy = max(y, maxy);
        }
        ax[i] = maxx;
        ay[i] = maxy;
    }
    for(int i = 1; i<=n; ++i){
        if(i==k) continue;
        if(ax[k]<ax[i] && ay[k]<ay[i]) kq++;

    }
    cout << kq;
    return 0;
}
