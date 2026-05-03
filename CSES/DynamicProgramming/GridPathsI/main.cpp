#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e3, mod = 1e9+7;
bool check[MAXN+5][MAXN+5];
long long dp[MAXN+5][MAXN+5], n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            char t;
            cin >> t;
            if(t=='*') check[i][j] = true;
        }
    }
    if(!check[1][1]) dp[1][1] = 1;
    for(int i = 2; i<=n; ++i){
        if(!check[1][i]) dp[1][i] = dp[1][i-1];
        if(!check[i][1]) dp[i][1] = dp[i-1][1];
    }
    for(int i = 2; i<=n; ++i){
        for(int j = 2; j<=n; ++j){
            if(check[i][j]){
                continue;
            }
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
            if(dp[i][j]>=mod) dp[i][j]-=mod;
        }
    }
//    for(int i = 1; i<=n; ++i){
//        for(int j = 1; j<=n; ++j) cout << check[i][j] << " ";
//        cout << "\n";
//    }
//    for(int i = 1; i<=n; ++i){
//        for(int j = 1; j<=n; ++j) cout << dp[i][j] << " ";
//        cout << "\n";
//    }
    cout << dp[n][n];
    return 0;
}
