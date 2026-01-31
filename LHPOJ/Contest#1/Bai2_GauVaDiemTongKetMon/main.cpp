#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,q;
long long ps[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >> x;
        ps[i] = ps[i-1]+x;
    }
    double t = (double)(ps[n]-ps[0])/(n-1+1);
    cout << fixed << setprecision(1) << t << "\n";
    while(q--){
        int l,r;
        cin >> l >> r;
        double kq = (double)(ps[r]-ps[l-1])/(r-l+1);
        cout << fixed << setprecision(1) << kq << "\n";
    }
    return 0;
}
