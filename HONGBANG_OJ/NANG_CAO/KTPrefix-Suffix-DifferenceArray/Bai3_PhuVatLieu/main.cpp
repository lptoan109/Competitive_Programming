#include <bits/stdc++.h>
using namespace std;
long long n, ps[1005][1005],a[1005][1005],k, x1,x2,y11,y2, kq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("COVER.INP", "r", stdin);
    freopen("COVER.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> x1 >> y11 >> x2 >> y2;
        int r1 = x1 + 1;
        int c1 = y11 + 1;
        int r2 = x2;
        int c2 = y2;
        ps[r1][c1]++;
        ps[r2+1][c1]--;
        ps[r1][c2+1]--;
        ps[r2 + 1][c2+1]++;
    }
    for(int i = 1; i<= 1000; ++i){
        for(int j = 1; j<= 1000; ++j){
            a[i][j] = ps[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            if(a[i][j]==k) kq++;
        }
    }
    cout << kq;
    return 0;
}
