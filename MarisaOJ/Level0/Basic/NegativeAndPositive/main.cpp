#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;
int n, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i) if(a[i]<0) cout << a[i] << " ";
    for(int i = 1; i<=n; ++i) if(a[i]>0) cout << a[i] << " ";
    return 0;
}
