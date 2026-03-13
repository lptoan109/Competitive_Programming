#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 2e4;
ll a[MAXN+5], dp[MAXN+5], n, ln = -1e8, vtm;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUBMAX.INP", "r", stdin);
    freopen("SUBMAX.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp[1] = 1;
    ln = a[1];
    vtm = 1;
    for(int i = 2; i<=n; ++i){
        if(a[i]>ln){

        }
    }
    return 0;
}
