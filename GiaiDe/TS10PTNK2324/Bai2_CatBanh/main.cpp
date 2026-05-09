#include <bits/stdc++.h>
using namespace std;
long long n, m, k;
const int MAXN = 4e3;
long long a[MAXN+5][MAXN+5], kq;
void solve(){
    while(k--){
        int t1, t2;
        cin >> t1 >> t2;
        a[t1][t2]++;
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            a[i][j] += a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    }
    for(int i =1 ; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            long long t1 = a[i][j];
            long long t2 = a[i][m]-a[i][j];
            long long t3 = a[n][j]-a[i][j];
            long long t4 = a[n][m]-a[i][m]-a[n][j]+a[i][j];
            if(t1==t2 && t2==t3 && t3==t4) kq++;
        }
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAKE.INP", "r", stdin);
    freopen("CAKE.OUT", "w", stdout);
    cin >> n >> m >> k;
    solve();
    return 0;
}
