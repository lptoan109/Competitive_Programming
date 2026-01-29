#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,k, a[MAXN+5];
long long kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1,a+1+n);
    int t = 1;
    for(int i = n-k+1; i<=n; ++i){
        kq+=(t*a[i]);
        t++;
    }
    cout << kq;
    return 0;
}
