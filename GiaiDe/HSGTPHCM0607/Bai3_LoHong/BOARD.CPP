#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4;
int dp[MAXN+5][MAXN+5], m,n,k, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BOARD.INP", "r", stdin);
    freopen("BOARD.OUT", "w", stdout);
    cin >> m >> n >> k;
    while(k--){
        int x,y;
        cin >> x >> y;
        dp[x][y] = -1;
    }
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            if(dp[i][j] != -1){
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) +1;
                kq = max(dp[i][j], kq);
            }
            else dp[i][j] = 0;
        }
    }
    cout << kq*4;
    return 0;
}
