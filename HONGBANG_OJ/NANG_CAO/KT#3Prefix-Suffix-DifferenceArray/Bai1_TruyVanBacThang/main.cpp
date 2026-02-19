#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, a[MAXN+5], q,l,r, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("QUERY.INP", "r", stdin);
    freopen("QUERY.OUT", "w", stdout);
    cin >> n >> q;
    long long ps[n+5], ps2[n+5];
    ps[0] = 0; ps2[0] = 0;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = a[i] + ps[i-1];
        ps2[i] = ps2[i-1]+(i*a[i]);
    }
    for(int i = 1; i<=q; ++i){
        cin >> l >> r;
        kq =(ps2[r]-ps2[l-1])-(l-1)*(ps[r]-ps[l-1]);
        cout << kq << "\n";
    }
    return 0;
}
