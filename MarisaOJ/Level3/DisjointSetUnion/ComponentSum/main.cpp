#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, q, lab[MAXN+5];
void make_set(int v){
    lab[v] = -1;
}
int find_set(int v){
    return v<0?v:lab[v] = find_set(lab[v]);
}
void union_set(int u, int v){
    u = find_set(u);
    v = find_set(v);
    if(u!=v){
        if(lab[u]>lab[v]) swap(u, v);
        lab[u]+=lab[v];
        lab[v] = u;
        sum[]
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i) make_set(i);
    while(q--){
        int t;
        cin >> t;
        if(t==1){
            int u, v;
            cin >> u >> v;
            union_set(u, v);
        }
        else{
            int u;
            cin >> u;
            cout << sum(u)
        }
    }
    return 0;
}
