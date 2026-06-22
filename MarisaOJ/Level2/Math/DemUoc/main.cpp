#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e6;
int q, cnt[MAXN+5];
long long ps[MAXN+1];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("DU.INP","r", stdin);
    cin >> q;
    for(int i = 1; i<=MAXN; ++i){
        for(int j = i; j<=MAXN; j+=i){
            cnt[j]++;
        }
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
