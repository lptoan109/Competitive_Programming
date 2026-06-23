#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n , a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    cout << a[n-1];
    return 0;
}
