#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,k,q,a[MAXN+5],ps[MAXN+5], cnt[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n >> k >> q;
    for(int i = 0; i<n; ++i){
        int l,r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    for(int i = 1; i<=MAXN; ++i){
        ps[i] += ps[i-1]+a[i];
    }
    for(int i = 1; i<=MAXN; ++i){
        if(ps[i]>=k) cnt[i]++;
    }
    ps[0] = 0;
    for(int i = 1; i<=MAXN; ++i){
        ps[i] = ps[i-1]+cnt[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << ps[r]-ps[l-1] << "\n";
    }
    return 0;
}
