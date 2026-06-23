#include <bits/stdc++.h>
using namespace std;
int n, a[105], kq[105], k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    reverse(a+1, a+1+n);
    for(int i = 1; i<=n; ++i){
        kq[(i+k)%n==0?n:(i+k)%n] = a[i];
    }
    for(int i = n; i>=1; --i) cout << kq[i] << " ";
    return 0;
}
