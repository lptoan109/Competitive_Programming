#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4, mod = 1e9+7;
long long a[MAXN+5][MAXN+5], n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
    cin >> n;
    for(int i = 0; i<=n; ++i){
        a[0][i] = 1;
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            a[i][j] = a[i][j-1];
            if(i>=j){
                a[i][j] = (a[i][j]+a[i-j][j-1]) %mod;
            }
        }
    }
    for(int i = 0; i<=n; ++i){
        for(int j = 0; j<=n; ++j) cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << a[n][n];
    return 0;
}
