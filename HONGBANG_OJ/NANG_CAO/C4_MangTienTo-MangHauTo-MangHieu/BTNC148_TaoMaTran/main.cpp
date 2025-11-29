#include <bits/stdc++.h>
using namespace std;
long long n,m,t,val, df[1005][1005], a[1005][1005], r1,c1,r2,c2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>m>>n>>t;
    for(int i = 1; i<=t; ++i){
        cin >> r1>>c1>>r2>>c2>>val;
        r1++; c1++; r2++; c2++;
        df[r1][c1]+=val;
        df[r1][c2+1]-=val;
        df[r2+1][c1]-=val;
        df[r2+1][c2+1]+=val;
    }
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n;++j){
            a[i][j] = df[i][j]+a[i-1][j]+a[i][j-1]-a[i-1][j-1];
        }
    }
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n;++j){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
