#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, a[MAXN+5], q;
long long tree[4*MAXN];
void build(long long v, long long tl, long long tr){
    if(tl==tr) tree[v]=a[tl];
    else{
        long long tm = tl+(tr-tl)/2;
        build(2*v,tl,tm);
        build(2*v+1,tm+1,tr);
        tree[v] = tree[2*v]+tree[2*v+1];
    }
}
void update(long long v, long long tl, long long tr, long long target, long long value){
    if(tl==tr){
        tree[v] = value;
    }
    else{
        long long tm = tl+(tr-tl)/2;
        if(target<=tm){
            update(2*v,tl,tm,target,value);
        }
        else update(2*v+1,tm+1,tr,target,value);
        tree[v] = tree[2*v]+tree[2*v+1];
    }
}
long long query(long long v, long long tl, long long tr, long long l, long long r){
    if(l>r) return 0;
    if(tl==l && tr==r){
        return tree[v];
    }
    long long tm = tl+(tr-tl)/2;
    return query(2*v,tl,tm,l,min(r,tm)) + query(2*v+1,tm+1,tr,max(tm+1,l),r);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI7.INP", "r", stdin);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    build(1,1,n);
    while(q--){
        int th;
        cin >> th;
        if(th == 1){
            int l,r;
            cin >> l >> r;
            cout << query(1,1,n,l,r) << "\n";
        }
        else{
            int i,x;
            cin >> i >> x;
            update(1,1,n,i,x);
        }
    }
    return 0;
}
