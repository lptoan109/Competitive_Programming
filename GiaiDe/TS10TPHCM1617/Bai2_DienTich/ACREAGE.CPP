#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, m, a[MAXN+5][MAXN+5];
set<int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ACREAGE.INP", "r", stdin);
    freopen("ACREAGE.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j) cin >> a[i][j];
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            if(a[i][j]==1){
                if(a[i-1][j]==0 && a[i][j-1]==0){
                    continue;
                }
                a[i][j] += a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            }
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            //cout << a[i][j] << " ";
            if(a[i][j]>0){
                kq.insert(a[i][j]);
            }
        }
        //cout << "\n";
    }
    for(int i: kq) cout << i << "\n";
    return 0;
}
