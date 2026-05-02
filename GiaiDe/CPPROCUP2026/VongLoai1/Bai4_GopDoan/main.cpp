#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int dp[60][MAXN+5], n, kq;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int a;
        cin >> a;
        dp[a][i] = i+1;
        kq = max(kq, a);
    }
    for(int v = 1; v<60; ++v){
        for(int i = 1; i<=n; ++i){
            if(dp[v][i]>0) continue;
            int mid = dp[v-1][i];
            if(mid>0 && dp[v-1][mid]>0){
                dp[v][i] =dp[v-1][mid];
                kq = max(kq,v);
            }
        }
    }
    cout << kq;
    return 0;
}
