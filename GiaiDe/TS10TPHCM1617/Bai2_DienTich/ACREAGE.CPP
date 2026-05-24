#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n,m, a[MAXN+5][MAXN+5], r[MAXN+5][MAXN+5];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ACREAGE.INP", "r", stdin);
    freopen("ACREAGE.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> a[i][j];
        }
    }
    for(int i =1 ; i<=n; ++i){
        int cur = 0;
        for(int j = m; j>=1; --j){
            if(a[i][j]==1){
                cur++;
            }
            else{
                cur = 0;
            }
            a[i][j] = cur;
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){

        }
    }
}

