#include <bits/stdc++.h>
using namespace std;
int n, a[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    for(int i = 1; i<=n; ++i) cout << a[i] << " ";
    return 0;
}
