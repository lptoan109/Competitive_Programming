#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n,q, a[MAXN+5];
vector<pair<long long, long long>>tree(4*MAXN);
void build(long long v, long long tl, long long tr){
    if(tl==tr) tree[v] = make_pair(a[tl], 1);
    else{
        long long tm = tl+(tr-tl)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        if(tree[2*v].first==tree[2*v+1].first){
            tree[v] = make_pair(tree[2*v].first, tree[2*v].second+tree[2*v+1].second);
        }
        else if(tree[2*v].first<tree[2*v+1].first){
            tree[v] = make_pair(tree[2*v+1].first, tree[2*v+1].second);
        }
        else tree[v] = make_pair(tree[2*v].first, tree[2*v].second);
    }
}
void update(long long v, long long tl, long long tr, long long i, long long x){
    if(tl==tr) tree[v].first = x;
    else{
        long long tm = tl+(tr-tl)/2;
        if(i<=tm){
            update(2*v,tl,tm,i,x);
        }
        else{
            update(2*v+1,tm+1,tr,i,x);
        }
        if(tree[2*v].first==tree[2*v+1].first){
            tree[v] = make_pair(tree[2*v].first, tree[2*v].second+tree[2*v+1].second);
        }
        else if(tree[2*v].first<tree[2*v+1].first){
            tree[v] = make_pair(tree[2*v+1].first, tree[2*v+1].second);
        }
        else tree[v] = make_pair(tree[2*v].first, tree[2*v].second);
    }
}
pair<long long, long long> query(long long v, long long tl, long long tr, long long l, long long r){
    if(l>r){
        pair<long long, long long>t={-1,0};
        return t;
    }
    if(tl==l&&tr==r) return tree[v];
    long long tm = tl+(tr-tl)/2;
    pair <long long, long long> a = query(2*v,tl,tm,l,min(r,tm)), b = query(2*v+1,tm+1,tr,max(l,tm+1),r);
    if(a.first==b.first){
        return {a.first, a.second+b.second};
    }
    else if(a<b){
        return b;
    }
    else return a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI8.INP", "r", stdin);
    cin >> n >> q;
    for(long long i = 1; i<=n; ++i) cin >> a[i];
    build(1,1,n);
    while(q--){
        int type;
        cin >> type;
        if(type==1){
            long long i,x;
            cin >> i >> x;
            update(1,1,n,i,x);
        }
        else{
            long long l,r;
            cin >> l >> r;
            pair<long long, long long>t=query(1,1,n,l,r);
            cout << t.first << " " << t.second << "\n";
        }
    }
    return 0;
}
