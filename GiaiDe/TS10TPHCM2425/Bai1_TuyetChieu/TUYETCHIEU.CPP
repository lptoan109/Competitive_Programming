#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int cur[MAXN+5], n, k, kq = 1e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TUYETCHIEU.INP", "r", stdin);
    freopen("TUYETCHIEU.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        if(cur[t]!=0){
            if(i<cur[t]+k){
                kq = min(kq, t);
            }
        }
        cur[t] = i;
    }
    if(kq==(int)1e9) cout << -1;
    else cout << kq;
    return 0;
}
