#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, a[MAXN+5];
long long kq1 = 1e18, kq2 = -1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i) cin >> a[i];
    for(int j = 1; j<=n; ++j){
        int so;
        cin >> so;
        kq1 = min(kq1, 5LL*a[j]+(-3*so));
        kq2 = max(kq2, 5LL*a[j]+(-3*so));
    }
    cout << kq2 << "\n" << kq1;
    return 0;
}
