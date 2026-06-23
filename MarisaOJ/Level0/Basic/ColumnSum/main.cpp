#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, m, a[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j) cin >> a[i][j];
    }
    for(int i = 1; i<=m; ++i){
        int t = 0;
        for(int j = 1; j<=n; ++j){
            t+=a[j][i];
        }
        cout << t << " ";
    }
    return 0;
}
