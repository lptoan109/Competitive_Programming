#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, m, a[MAXN+5], l[MAXN+5], r[MAXN+5], b[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TRAM.INP", "r", stdin);
    freopen("TRAM.OUT", "w", stdout);
    cin >> n >> m;
    for(int i =1 ; i<=n; ++i) cin >> a[i];
    for(int i =1 ; i<=m; ++i){
        int t;
        cin >> t;
        b[t]++;
    }
    int cur = 1e6;
    for(int i = 1; i<=(int)1e6; ++i){
        if(b[i]==1){
            cur = 0;
        }
        l[i] = cur;
        cur++;
    }
    cur = 1e6;
    for(int i = 1e6; i>=1; --i){
        if(b[i]==1){
            cur = 0;
        }
        r[i] = cur;
        cur++;
    }
    for(int i = 1; i<=n; ++i){
        cout << min(l[a[i]], r[a[i]]) << " ";
    }
    return 0;
}
