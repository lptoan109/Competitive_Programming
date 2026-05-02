#include <bits/stdc++.h>
using namespace std;
const int MAXN = 4e5 + 5;
long long a[200005], temp[MAXN], st_max[4*MAXN];
int st_cnt[4*MAXN], n, q, m;
struct query{
    int id;
    long long val;
} qs[200005];
void update(int node, int l, int r, int pos, int v) {
    if(l==r){
        st_cnt[node]+=v;
        if(st_cnt[node]>0){
            st_max[node] = temp[l-1];
        }
        else{
            st_max[node] = -1e18;
        }
        return;
    }
    int mid =(l + r)/2;
    if(pos <= mid) update(2*node, l, mid, pos, v);
    else update(2*node+1, mid + 1, r, pos, v);
    st_cnt[node] = st_cnt[2*node] + st_cnt[2*node+1];
    st_max[node] = max(st_max[2*node], st_max[2*node+1] - st_cnt[2*node]);
}
map<long long, int> cnt_map;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if(!(cin >> n >> q)) return 0;
    int t = 0;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        temp[t++] = a[i];
    }
    for(int i = 0; i < q; ++i){
        cin >> qs[i].id>> qs[i].val;
        temp[t++]=qs[i].val;
    }
    sort(temp, temp+t);
    m = unique(temp, temp + t)-temp;
    for(int i = 0; i < 4 * MAXN; ++i) st_max[i] = -1e18;
    for(int i = 1; i <= n; ++i){
        if(++cnt_map[a[i]] == 1){
            int p = lower_bound(temp, temp + m, a[i])-temp+1;
            update(1, 1, m, p, 1);
        }
    }
    for(int i = 0; i < q; ++i){
        if(--cnt_map[a[qs[i].id]]== 0){
            int p = lower_bound(temp, temp+m, a[qs[i].id])-temp+1;
            update(1, 1, m, p, -1);
        }
        a[qs[i].id] = qs[i].val;
        if(++cnt_map[a[qs[i].id]]==1){
            int p = lower_bound(temp, temp + m, a[qs[i].id])-temp+1;
            update(1, 1, m, p, 1);
        }
        cout << st_max[1] + 1 << "\n";
    }
    return 0;
}
