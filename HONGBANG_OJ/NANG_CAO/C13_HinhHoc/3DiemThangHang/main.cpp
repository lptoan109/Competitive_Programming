#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 5e2;
const double EPS = 1e-9;
struct point{
    int x;
    int y;
};
double F(point m, point a, point b){
    return ((a.y - b.y)*m.x +(b.x-a.x)*m.y+(a.x*b.y - b.x*a.y));
}
bool kt(point m, point a, point b){
    return F(m, a, b)==0;
}
map<pair<int, int>, int> cnt;
int n, kq, m;
point a[MAXN+5];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("3D.INP", "r", stdin);
    freopen("3D.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int xt, yt;
        cin >> xt >> yt;
        pair<int, int> t = {xt, yt};
        if(cnt.find(t)!=cnt.end()) continue;
        a[++m].x = xt;
        a[m].y = yt;
        cnt[t]++;
    }
    for(int i = 1; i<=m; ++i){
        for(int j = i+1; j<=m; ++j){
            for(int k = j+1; k<=m; ++k){
                if(a[i].x == a[j].x && a[j].x == a[k].x && a[i].y == a[j].y && a[j].y == a[k].y) continue;
                if(kt(a[k], a[i], a[j])) kq++;
                //cout << i << " " << j << " " << k << "\n";
            }
        }
    }
    cout << kq;
    return 0;
}
