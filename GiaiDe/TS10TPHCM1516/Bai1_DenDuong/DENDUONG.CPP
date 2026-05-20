#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, l, a[MAXN+5];
double kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DENDUONG.INP", "r", stdin);
    freopen("DENDUONG.OUT", "w", stdout);
    cin >> n >> l;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    kq = a[1]*1.0;
    for(int i = 1; i<=n; ++i){
        kq = max(kq, (abs(a[i]-a[i-1])/2.0)*1.0);
    }
    kq = max(kq, abs(l-a[n])*1.0);
    cout << fixed << setprecision(2) << kq;
    return 0;
}
