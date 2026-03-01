#include <bits/stdc++.h>
using namespace std;
int m,n;
char a[105][105];
long long kq = -1e18;
bool check(int r, int c, int d ,int rong){
    map <char, int> kt;
    for(int i = r; i<=d; ++i){
        for(int j = c; j<=rong; ++j){
            if(kt.find(a[i][j])!=kt.end()) return false;
            kt[a[i][j]]++;
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DIENTICH.INP", "r", stdin);
    freopen("DIENTICH.OUT", "w", stdout);
    cin >> m >> n;
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            for(int d = 1; d<=m-i+1; ++i){
                for(int c = 1; c<=n-j+1; ++j){
                    if(check(i,j,d,c)){
                        kq = max(kq, (long long)d*c);
                    }
                    else break;
                }
            }
        }
    }
    cout << kq;
    return 0;
}
