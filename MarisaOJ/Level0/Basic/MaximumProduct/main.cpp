#include <bits/stdc++.h>
using namespace std;
long long n, a[1005], kq = -1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<n; ++i){
        for(int j = i+1; j<=n; ++j){
            kq = max(kq, a[i]*a[j]);
        }
    }
    cout << kq;
    return 0;
}
