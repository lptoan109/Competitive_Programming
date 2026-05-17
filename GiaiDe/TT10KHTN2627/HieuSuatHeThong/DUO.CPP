#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n, m, a[MAXN+5], b[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DUO.INP", "r", stdin);
    freopen("DUO.OUT", "w", stdout);
    cin >> n >> m;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(ll i = 1; i<=n; ++i){
        cin >> b[i];
    }
    ll cnt = 0, ta = 0, tb = 0;
    for(ll i = 1; i<=n; ++i){
        ta+=a[i];
        tb+=b[i];
        cnt++;
        double checka = 1.0*ta/cnt, checkb = 1.0*tb/cnt;
        //cout << setprecision(15) << 1.0*checka+checkb*1.0 << "\n";
        if(1.0*checka+checkb*1.0<(double)m){
            kq = max(kq, cnt);
            //cout << cnt << "***\n";
            cnt = 0;
            ta = 0;
            tb = 0;
        }
    }
    kq = max(kq, cnt);
    cout << kq;
    return 0;
}
