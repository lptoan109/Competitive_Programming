#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2000;
string s;
int dp[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("WORDGAME.INP", "r", stdin);
    freopen("WORDGAME.OUT", "w", stdout);
    cin >> s;
    string p = s;
    reverse(p.begin(), p.end());
    int n = s.size();
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            if(s[i-1]==p[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    //cout << n << " " << dp[n][n] << "\n";
    cout << n-dp[n][n];
    return 0;
}
