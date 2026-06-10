#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005], kq;;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >>a[i];
    sort(a+1, a+1+n);
    for(int i = 1; i<n; ++i){
        int cnt = 1;
        for(int j = i+1; j<=n; ++j){
            if(a[j]-a[i]<=k) cnt++;
        }
        kq = max(kq, cnt);
    }
    cout << kq;
    return 0;
}
