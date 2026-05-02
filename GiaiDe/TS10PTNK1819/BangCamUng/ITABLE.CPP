#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
const int MAXN = 1e3;
pair<int, int> dd(int i, int j, char k){
    if(k=='E') return {i, j+1};
    if(k=='W') return {i, j-1};
    if(k=='S') return {i+1, j};
    if(k=='N') return {i-1, j};
}
int check[MAXN+5][MAXN+5];
char a[MAXN+5][MAXN+5];
int n, m, kq;
void dfs(int t1, int t2){
    map<pair<int, int>, int> trace;
    int t = 0;
    while(1){
        trace[{t1, t2}]++;
        pair<int, int> dtt = dd(t1, t2, a[t1][t2]);
        if(check[dtt.fi][dtt.se]==1 || trace.find({dtt.fi, dtt.se})!=trace.end()){
            t = 1;
            break;
        }
        if(check[dtt.fi][dtt.se] == 2 || dtt.fi>n || dtt.fi<1 || dtt.se>m || dtt.se<1){
            t = 2;
            break;
        }
        t1 = dtt.fi;
        t2 = dtt.se;
    }
    for(auto &i:trace){
        pair<int, int> st = i.fi;
        check[st.fi][st.se] = t;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ITABLE.INP", "r", stdin);
    freopen("ITABLE.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            if(check[i][j]==1 || check[i][j]==2) continue;
            dfs(i, j);
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            //cout << check[i][j] << " ";
            if(check[i][j] == 1) kq++;
        }
        //cout << "\n";
    }
    cout << kq;
    return 0;
}
