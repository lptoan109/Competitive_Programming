#include <bits/stdc++.h>
using namespace std;
long long kq = 1e18, n, a[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i<=n; ++i){
        long long cnt = 0;
        for(int j = 1; j<i; ++j){
            cnt+=(a[j]*(n-i+j));
        }
        for(int j = i+1; j<=n; ++j){
            cnt+=(a[j]*(j-i));
        }
        kq = min(kq, cnt);
    }
    cout << kq;
    return 0;
}
