#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN  = 1e5;
int n,q;
long long ps[MAXN+5];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        ps[i] = ps[i-1]+t;
    }
    while(q--){
        int da,ma,ya,db,mb,yb;
        cin >> da >> ma >> ya >> db >> mb >> yb;
        long long kq = ((yb-1)*ps[n]+ps[mb-1]+db)-((ya-1)*ps[n]+ps[ma-1]+da)+1;
        cout << kq << "\n";
    }
    return 0;
}
