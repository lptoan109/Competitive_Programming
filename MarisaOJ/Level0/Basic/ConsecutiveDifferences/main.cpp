#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int a[MAXN+5], n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 2; i<=n; ++i){
        kq = max(kq, abs(a[i]-a[i-1]));
    }
    cout << kq;
    return 0;
}
