#include <bits/stdc++.h>
using namespace std;
const int MAXN = 10;
int n, m, x, y, a[MAXN+5][MAXN+5], b[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> x >> y;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j) cin >> a[i][j];
    }
    for(int i = 1; i<=x; ++i){
        for(int j = 1; j<=y; ++j) cin >> b[i][j];
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            if(a[i][j] == b[1][1]){
                for(int k = 1; k<=x; ++k){
                    for(int h = 1; h<=y; ++h){
                        if(a[i+k-1][j+h-1] != b[k][h] || i+k-1 <1 || i+k-1 >n || j+h-1<1 || j+h-1>m){
                            goto dung;
                        }
                    }
                }
                cout << "YES";
                return 0;
            }
            dung:
                continue;
        }
    }
    cout << "NO";
    return 0;
}

