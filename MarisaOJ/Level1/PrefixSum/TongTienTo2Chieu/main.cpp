#include <bits/stdc++.h>
using namespace std;
long long a[1005][1005], n,m,q, r1,c1,r2,c2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("input.INP", "r", stdin);
    cin >> n >> m >> q;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> a[i][j];
        }
    }
    long long ps[n+5][m+5];
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            ps[i][j] = a[i][j]+ ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
        }
    }
    for(int i = 1; i<=q; ++i){
        cin >> r1 >> c1 >> r2 >> c2;
        cout << ps[r2][c2]-ps[r1-1][c2]-ps[r2][c1-1]+ps[r1-1][c1-1] << "\n";
    }
    return 0;
}
