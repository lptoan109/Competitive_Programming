#include <bits/stdc++.h>
using namespace std;
int n, m, q, a[105][105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> q;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> a[i][j];
        }
    }
    while(q--){
        int type, x, y;
        cin >> type >> x >> y;
        if(type == 1){
            for(int i = 1; i<=m; ++i){
                swap(a[x][i], a[y][i]);
            }
        }
        else{
            for(int i= 1; i<=n; ++i){
                swap(a[i][x], a[i][y]);
            }
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j) cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
