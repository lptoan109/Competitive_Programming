#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n;
long long ps[MAXN+5], kq, bd = 1e18, kt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        long long l, r, val;
        cin >> l >> r >> val;
        ps[l]+=val;
        ps[r+1]-=val;
        bd = min(bd, l);
        kt = max(kt, r);
    }
    for(long long i = bd; i<=kt; ++i){
        ps[i]+=ps[i-1];
        kq = max(kq, ps[i]);
    }
    cout << kq;
    return 0;
}
