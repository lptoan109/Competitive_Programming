#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,q, lab[MAXN+5];
void make_set(int v){
    lab[v] = -1;
}
int find_set(int v){
    return lab[v]<0?v:lab[v] = find_set(lab[v]);
}
void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(lab[a]>lab[b]) swap(a, b);
        lab[a]+=lab[b];
        lab[b] = a;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        make_set(i);
    }
    while(q--){
        int t, u ,v;
        cin >> t >> u >> v;
        if(t==1){
            union_set(u, v);
        }
        else{
            u = find_set(u);
            v = find_set(v);
            u==v?cout << "YES\n":cout << "NO\n";
        }
    }
    return 0;
}
