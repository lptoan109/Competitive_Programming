#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 1e6
ll n, top[MAXN+5], bot[MAXN+5], kq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    long long ps[2][n+5];
    for(int i = 1; i<=2; ++i){
        for(int j = 1; j<=n; ++j) cin >> mapp[i][j]
    }
    for(int i = 1; i<=2; ++i){
        for(int j = 1; j<=n; ++j){
            ps[i][j] = mapp[i][j] + ps[i-1][j] + ps[i][j-1] - ps[i-1][j-1];
        }
    }
    for(int i = 1; i <=n; ++i){
        if(a[])
    }

    cout << kq;
    return 0;
}
