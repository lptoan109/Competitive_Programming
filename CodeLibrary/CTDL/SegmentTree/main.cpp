#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,q,a[MAXN];
long long st[4*MAXN+5];

void build(int x, int l, int r){
    if(l==r){
        st[x] = a[l];
        return;
    }
    int mid = (l+r)/2;
    build(2*x, l, mid);
    build(2*x+1, mid+1, r);

    st[x] = st[2*x]+st[2*x+1];
}
void update(int x, int l, int r, int pos, int val){
    if(l>pos || r<pos) return;
    if(l==r){
        st[x] = val;
        return;
    }

    int mid = (l+r)/2;
    if(pos <= mid) update(2*x, l, mid, pos, val);
    else update(2*x+1, mid+1, r, pos, val);
    st[x] = st[2*x]+st[2*x+1];
}
long long query(int x, int l, int r, int u, int v){
    if(l>v || r<u) return 0;
    if(l>=u&&r<=v) return st[x];
    int mid = (l+r)/2;
    long long q1 = query(2*x, l, mid, u,v);
    long long q2 = query(2*x+1, mid+1, r, u ,v);
    return q1+q2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    build(1,1,n);
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int pos,val;
            cin >> pos >> val;
            a[pos]+=val;
            update(1,1,n,pos,a[pos]);
        }
        if(type == 2){
            int l,r;
            cin >> l >> r;
            cout << query(1,1,n,l,r) << "\n";
        }
    }
    return 0;
}
