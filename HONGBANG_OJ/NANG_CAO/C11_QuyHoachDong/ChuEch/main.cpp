#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MAXN = 1e6;
ll n,a[MAXN+5], dp[MAXN+5],vt[MAXN+5], kq;
vector <ll> vkq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FROG.INP", "r", stdin);
    freopen("FROG.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp[1] = 0;
    dp[2] = abs(a[1]-a[2]);
    vt[2] = 1;
    for(int i = 3; i<=n; ++i){
        ll c1 = dp[i-1]+(abs(a[i-1]-a[i])), c2 = dp[i-2]+(abs(a[i-2]-a[i]));
        if(c2<=c1){
            dp[i] = c2;
            vt[i] = i-2;
            //cout << i  << " " <<i-2 <<" " << c2 << "\n";
        }
        else{
            dp[i] = c1;
            vt[i] = i-1;
            //cout << i  << " " << i-1 << " " << c1 << "\n";
        }
    }
    vkq.push_back(n);
    int t = n;
    while(t>1){
        vkq.push_back(vt[t]);
        t = vt[t];
    }
    cout << dp[n] << "\n";
    sort(vkq.begin(), vkq.end());
    for(int i:vkq){
        cout << i << " ";
    }
    return 0;
}
