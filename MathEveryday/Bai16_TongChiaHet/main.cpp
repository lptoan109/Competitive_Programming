#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,m;
int cnt[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI16.INP", "r", stdin);
    cin >> n >> m;
    long long kq, t;
    kq = t = 0;
    cnt[0] = 1;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >> x;
        t = (t+x)%m;
        kq+=cnt[t];
        cnt[t]++;
    }
    cout <<  kq;
    return 0;
}
