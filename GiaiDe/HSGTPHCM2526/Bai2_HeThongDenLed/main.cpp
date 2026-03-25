#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n,k, a[MAXN+5], dp[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DENLED.INP", "r", stdin);
    freopen("DENLED.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        dp[i] = a[i]%k;
    }
    for(int i = 1; i<=n; ++i){
        int t = dp[i], tong = a[i];
        if(t==0||t==k) tong = a[i];
        for(int j = 1; j<=n; ++j){
            if(i==j) continue;
            t+=dp[i];
            if(t == 0 || t==k) tong+=a[i];
            kq = max(kq, tong);
        }
    }
    cout << kq;
    return 0;
}
