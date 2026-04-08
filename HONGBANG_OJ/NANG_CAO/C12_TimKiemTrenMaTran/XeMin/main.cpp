#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
#define fi first
#define se second
int d[10] = {-1, -1, 0, 1, 1, 1, 0, -1}, c[10] = {0, 1, 1, 1, 0, -1, -1, -1};
int n, a[MAXN+5][MAXN+5],dist[MAXN+5][MAXN+5], m, kqu, kqv;
queue<pair<int, int>> que;
pair<int, int> trace[MAXN+5][MAXN+5];
vector<pair<int, int>> kq;
bool check = false;
void bfs(int nd, int nc){
    que.push({nd, nc});
    a[nd][nc] = 1;
    //dist[nd][nc] = 1;
    trace[nd][nc] = {0, 0};
    while(!que.empty()){
        pair<int, int> t = que.front();
        que.pop();
        int u = t.fi, v = t.se;
        for(int i = 0; i<8; ++i){
            int nu = u+d[i], nv = v+c[i];
            if(nu>=1 && nu<=1000 && nv>=1 && nv<=1000 && a[nu][nv]!=1){
                trace[nu][nv] = {u, v};
                dist[nu][nv] = dist[u][v]+1;
                if(a[nu][nv] == 2){
                    kqu = nu;
                    kqv = nv;
                    check = true;
                    return;
                }
                que.push({nu, nv});
                a[nu][nv] = 1;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BFS02.INP", "r", stdin);
    freopen("BFS02.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int k;
        cin >> k;
        for(int j  = 1; j<=k; ++j){
            int t;
            cin >> t;
            a[i][t] = 1;
        }
    }
    int nd, nc, dd, dc;
    cin >> nd >> nc >> dd >> dc;
    if(nc==dc && nd == dd){
        cout << 0 << "\n";
        return 0;
    }
    a[dd][dc] = 2;
    bfs(nd, nc);
    if(!check){
        cout << "No";
        return 0;
    }
    cout << dist[kqu][kqv] << "\n";
    kq.push_back({kqu, kqv});
    pair<int, int> t = trace[kqu][kqv];
    kqu = t.fi;
    kqv = t.se;
    while(kqu!=0 && kqv!=0){
        kq.push_back({kqu, kqv});
        t = trace[kqu][kqv];
        kqu = t.fi;
        kqv = t.se;
    }
    kq.pop_back();
    reverse(kq.begin(), kq.end());
    for(auto &i:kq){
        cout << i.fi << " " << i.se << "\n";
    }
    return 0;
}
