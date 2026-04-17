#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define fi first
#define se second
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.fi == b.fi) return a.se<b.se;
    return a.fi<b.fi;
}
int n, m, cnt[MAXN+5], kq;
pair<int, int> a[MAXN+5];
void sub1(){
    for(int i = 1; i<=n; ++i){
        int x,y;
        cin >> x >> y;
        a[i] = {x,y};
    }
    for(int i = 1; i<=m; ++i){
        int p;
        cin >> p;
        for(int j = 1; j<=n; ++j){
            if(p>a[j].fi && p<a[j].se){
                cnt[j]++;
            }
        }
    }
    for(int i = 1; i<=n; ++i){
        if(cnt[i]>=2) kq++;
    }
    cout << kq;
}
void sub2(){
    vector<int> p_points(m);
    for(int i = 1; i<=n; ++i){
        int x, y;
        cin >> x >> y;
        a[i] = {x, y};
    }
    for(int i = 0; i < m; ++i) cin >> p_points[i];
    sort(p_points.begin(), p_points.end());
    for(int i=1; i<=n; ++i){
        int x = a[i].fi, y = a[i].se;
        if(x > y) swap(x, y);
        auto it1 = upper_bound(p_points.begin(), p_points.end(), x);
        auto it2 = lower_bound(p_points.begin(), p_points.end(), y);
        if(distance(it1, it2)>=2){
            kq++;
        }
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LINE.INP", "r", stdin);
    freopen("LINE.OUT", "w", stdout);
    cin >> n >> m;
    if(n<=1000 && m<=1000) sub1();
    else sub2();
    return 0;
}
