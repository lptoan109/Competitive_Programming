#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e6;
long long n, a[MAXN+5], ps[MAXN+5], l = 1e18, r = -1e18;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("Bai3.inp", "r", stdin);
    freopen("Bai3.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int x,d,k;
        cin >> x  >> d  >> k;
        l = min(l,x);
        r = max(r,x+d-1);
        a[x]+=k;
        a[x+d]-=k;
    }
//    for(int i = l; i<=r; ++i){
//        cout << a[i] << " ";
//    }
//    cout << "\n";
    for(int i = l; i<=r; ++i){
        ps[i] = ps[i-1]+a[i];
    }

    for(int i = l; i<=r; ++i){
        if(ps[i]!=ps[i-1]) cout << ps[i] << " ";
    }
    return 0;
}
