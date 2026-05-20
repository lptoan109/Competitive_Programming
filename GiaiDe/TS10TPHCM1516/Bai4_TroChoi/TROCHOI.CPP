#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4;
int dp[MAXN+5], a[MAXN+5], n, d, trace[MAXN+5], kq, dt;
vector<int> kqv;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TROCHOI.INP", "r", stdin);
    freopen("TROCHOI.OUT", "w", stdout);
    cin >> n >> d;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    trace[1] = 0;
    dp[1] = 1;
    for(int i = 2; i<=n; ++i){
        for(int j = 1; j<i; ++j){
            if(abs(a[i]-a[j])<=d && dp[j]>0 && dp[j]+1>dp[i]){
                dp[i] = dp[j]+1;
                trace[i] = j;
            }
        }
        //cout << dp[i] << " ";
        if(kq<=dp[i]){
            kq = dp[i];
            dt = i;
        }
    }
    cout << kq-1 << "\n";
    while(dt>0){
        kqv.push_back(dt);
        dt = trace[dt];
    }
    reverse(kqv.begin(), kqv.end());
    for(int i:kqv){
        cout << i << " ";
    }
    return 0;
}
