#include <bits/stdc++.h>
using namespace std;
int n, s, a[55], b[55], d, ad[1505];
namespace sub1{
    int dp[1005];
    void solve(){
        for(int i = 1; i<=n; ++i){
            for(int j = s; j>=a[i]; --j){
                dp[j] = max(dp[j], b[i]+dp[j-a[i]]);
            }
        }
        cout << dp[s];
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BLOCKOPT.INP", "r", stdin);
    freopen("BLOCKOPT.OUT", "w", stdout);
    cin >> n >> s;
    for(int i =1 ; i<=n; ++i){
        cin >>b[i] >> a[i];
    }
    cin >> d;
    for(int i = 1; i<=d; ++i) cin >> ad[i];
    if(d==0){
        sub1::solve();
        return 0;
    }
    return 0;
}
