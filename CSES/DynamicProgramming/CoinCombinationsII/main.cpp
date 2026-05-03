#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e6, mod = 1e9+7;
int n, x, a[105], dp[MAXN+5];
map<pair<int, int>, int> cnt;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sort(a+1, a+1+n);
    dp[0] = 1;
    for(int i = 1; i<=x; ++i){
        for(int j = 1; j<=n; ++j){
            if(a[j]>i) break;
            if(cnt.find({min(a[j], i-a[j]), max(a[j], i-a[j])})==cnt.end()){
                dp[i] += dp[i-a[j]];
                cout << i << " : " << dp[i] << " " << i << " " << i-a[j] << "\n";
                if(dp[i]>=mod) dp[i]-=mod;
            }
            cnt[{min(a[j], i-a[j]), max(a[j], i-a[j])}]++;
        }
    }
    for(int i = 1; i<=x; ++i){
        cout << dp[i] << " ";
    }
    cout << "\n";
    cout << dp[x];
}
