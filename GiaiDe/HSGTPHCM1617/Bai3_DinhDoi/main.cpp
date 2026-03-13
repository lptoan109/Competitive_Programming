#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n,m, a[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TOP.INP", "r", stdin);
    freopen("TOP.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            if(i-1<1){
                if(j-1<1){
                    if(a[i][j]>=a[i][j+1] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i+1][j+1]) kq++;
                }
                if(j+1>m){
                    if(a[i][j] >= a[i][j-1] && a[i][j] >= a[i+1][j-1] && a[i][j] >= a[i+1][j]) kq++;
                }
                if(a[i][j]>=a[i][j+1] && a[i][j] >= a[i][j-1] && a[i][j]>=a[i+1][j] && a[i][j]>=a[i+1][j+1] && a[i][j] >= a[i+1][j-1]) kq++;
            }
            else if(i+1>n){
                if(j-1<1){
                    if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i-1][j+1] && a[i][j] >= a[i][j+1]) kq++;
                }
                if(j+1>m){
                    if(a[i][j] >= a[i][j-1] && a[i][j] >= a[i-1][j-1] && a[i][j] >= a[i-1][j]) kq++;
                }
                if(a[i][j] >= a[i][j-1] && a[i][j] >= a[i-1][j] && a[i][j] >= a[i][j+1]) kq++;
            }
            else if(j+1)
            else if(j-1<1){

            }
        }
    }
    return 0;
}
