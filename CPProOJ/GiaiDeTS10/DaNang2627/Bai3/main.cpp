#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n;
long long dp[MAXN+5], kq;
bool check[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin >> dp[1];
    for(int i = 2; i<=n; ++i){
        cin >> dp[i];
        if(dp[i-1]>dp[i-2] && !check[i-1]){
            dp[i]+=dp[i-1];
            check[i] = true;
        }
        else dp[i]+=dp[i-2];
        kq = max(kq, dp[i]);
    }
    cout << kq;
    return 0;
}
