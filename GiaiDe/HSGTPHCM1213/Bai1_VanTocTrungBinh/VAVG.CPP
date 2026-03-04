#include <bits/stdc++.h>
using namespace std;
int n;
long long qd,tg;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("VAVG.INP", "r", stdin);
    freopen("VAVG.OUT", "w", stdout);
    cin >> n;
    while(n--){
        char b;
        int d,t;
        cin >> b >> d  >> t;
        qd+=d;
        tg+=t;
    }
    double kq = round((double)qd/tg*100)/100.0;
    cout << fixed << setprecision(2) << kq;
    return 0;
}
