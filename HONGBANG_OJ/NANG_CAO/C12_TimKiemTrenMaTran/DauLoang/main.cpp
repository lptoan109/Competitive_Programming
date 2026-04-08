#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
const int MAXN = 1e3;
int d[5] = {-1, 0, 1, 0}, c[5] = {0, 1, 0, -1};
int a[MAXN+5][MAXN+5], m, n, kq;
vector<int> kqv;
queue<pair<int, int>> que;
bool check[MAXN+5][MAXN+5];
int bfs(int nd, int nc){
    int kqt = 1;
    check[nd][nc] = true;
    que.push({nd, nc});
    while(!que.empty()){
        pair<int, int> t = que.front();
        //cout << t.fi << " " << t.se << "\n";
        que.pop();
        int u = t.fi, v = t.se;
        for(int i = 0; i<=3; ++i){
            int nu = u+d[i], nv = v+c[i];
            if(nu>=1&&nu<=m&&nv>=1&&nv<=n&&a[nu][nv]==1&&!check[nu][nv]){
                kqt++;
                check[nu][nv] = true;
                que.push({nu, nv});
            }
        }
    }
    return kqt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BFS03.INP", "r", stdin);
    freopen("BFS03.OUT", "w", stdout);
    cin >> m >> n;
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            if(a[i][j] == 1 && !check[i][j]){
                int t = bfs(i,j);
                kq++;
                kqv.push_back(t);
            }
        }
    }
    cout <<  kq << "\n";
    sort(kqv.begin(), kqv.end());
    for(int i:kqv){
        cout << i << " ";
    }
    return 0;
}
