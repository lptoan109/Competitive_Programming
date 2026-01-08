#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,a[MAXN+1];
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("TBC.INP", "r", stdin);
    freopen("TBC.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    cout << a[1] << " ";
    for(int i = 2; i<=n; ++i){
        kq = (a[i]*i) - (a[i-1]*(i-1));
        cout << kq << " ";
    }
    return 0;
}
