#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int a[MAXN+5][MAXN+5], n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SQUARE.INP", "r", stdin);
    freopen("SQUARE.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            if(a[i][j]==1){
                if(i-1>=1&&a[i-1][j]==0){
                    (i+1<=n&&a[i+1][j]==0){
                        (j-1>=1&&a[i][j-1]==0 j+1<=n&&a[i][j+1]==0) kq++;
            }
        }
    }
    cout << kq;
    return 0;
}
