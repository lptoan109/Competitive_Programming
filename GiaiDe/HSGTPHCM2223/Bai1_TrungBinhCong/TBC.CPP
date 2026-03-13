#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n,a[MAXN+5], t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TBC.INP", "r", stdin);
    freopen("TBC.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    cout << a[1] << " ";
    t = a[1];
    for(int i = 2; i<=n; ++i){
        long long kq = a[i]*i-t;
        cout << kq << " ";
        t+=kq;
    }
    return 0;
}
