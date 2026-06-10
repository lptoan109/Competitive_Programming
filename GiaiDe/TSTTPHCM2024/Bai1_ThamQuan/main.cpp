#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, m, a[MAXN+5];
vector<int> adj[MAXN+5];
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=m; ++i){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for(int i = 1; i<=n; ++i){
        long long s = a[i];
        vector<int> t = adj[i];
        if(!t.empty()){
            for(int j:t){
                s += a[j];
            }
        }
        kq = max(kq, s);
    }
    cout << kq;
    return 0;
}
