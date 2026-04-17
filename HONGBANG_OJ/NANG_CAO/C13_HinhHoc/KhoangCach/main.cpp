#include <bits/stdc++.h>
using namespace std;
int n, xa, ya;
double kq = -1e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("KC.INP", "r", stdin);
    freopen("KC.OUT", "w", stdout);
    cin >> n >> xa >> ya;
    for(int i = 1; i<=n; ++i){
        int xt, yt, d;
        cin >> xt >> yt >> d;
        kq = max(kq, abs(sqrt((xt-xa)*(xt-xa)+(yt-ya)*(yt-ya))-d));
    }
    cout << fixed << setprecision(2) << kq;
    return 0;
}
