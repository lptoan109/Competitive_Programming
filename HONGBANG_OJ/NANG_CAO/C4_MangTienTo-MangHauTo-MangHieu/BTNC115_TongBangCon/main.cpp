#include <bits/stdc++.h>
using namespace std;
long long n,m,a[1005][1005],ps[1005][1005],t,dtt,ctt,dpd,cpd, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    cin >> m >> n;
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            cin >> a[i][j];
            ps[i][j] = a[i][j]+ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
        }
    }
    cin>>t;
    for(int i = 1; i<=t; ++i){
        cin >> dtt>>ctt>>dps>>cpd;
        kq=ps[dpd][cpd]-ps[dpd][ctt-1]-ps[dtt-1][cpd]+ps[dtt-1][ctt-1];
        cout << kq <<"\n";
    }
    return 0;
}
