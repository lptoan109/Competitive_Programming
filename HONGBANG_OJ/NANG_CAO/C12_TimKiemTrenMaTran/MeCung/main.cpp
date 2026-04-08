#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
#define fi first
#define se second
int d[5] = {-1, 0, 1, 0}, c[5] = {0, 1, 0, -1};
int m, n,a[MAXN+5][MAXN+5], dist[MAXN+5][MAXN+5], kqu, kqv;
pair<int, int> trace[MAXN+5][MAXN+5];
vector<pair<int, int>> kq;
queue<pair<int, int>> qu;
bool check;
void bfs(){
    qu.push({1,1});
    dist[1][1] = 1;
    while(!qu.empty()){
        pair<int, int> cur = qu.front();
        //cout << cur.fi << " " << cur.se << "\n";
        qu.pop();
        int u = cur.fi, v = cur.se;
        for(int i = 0; i<=3; ++i){
            int nu = u+d[i], nv = v+c[i];
            if(nu>=1 && nu<=m && nv>=1 && nv<=n && dist[nu][nv]==0 && a[nu][nv]!=1){
                dist[nu][nv] = dist[u][v]+1;
                trace[nu][nv] = make_pair(u,v);
                qu.push({nu, nv});
                if(a[nu][nv]==2){
                    kqu = nu;
                    kqv = nv;
                    check = true;
                    return;
                }
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BFS01.INP", "r", stdin);
    freopen("BFS01.OUT", "w", stdout);
    string line;
    while(getline(cin, line)){
        if(line.empty()) break;
        int val;
        stringstream ss(line);
        n = 0;
        m++;
        while(ss>>val){
            n++;
            a[m][n] = val;
        }

    }
    if(a[1][1]==2){
        cout << 1 << "\n" << 1 << " " << 1;
        return 0;
    }
    bfs();
    if(!check){
        cout << 0;
        return 0;
    }
    cout << dist[kqu][kqv] << "\n";
    kq.push_back({kqu, kqv});
    pair<int, int> k = trace[kqu][kqv];
    kqu = k.fi;
    kqv = k.se;
    while(kqu!=0&&kqv!=0){
        kq.push_back(k);
        k = trace[kqu][kqv];
        kqu = k.fi;
        kqv = k.se;
    }
    reverse(kq.begin(), kq.end());
    for(auto &i:kq){
        cout << i.fi << " " << i.se << "\n";
    }
    return 0;
}
