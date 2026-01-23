#include <bits/stdc++.h>
using namespace std;
const int MAXN = 30;
int n, a[MAXN+5][MAXN+5];
long long kq = -1e18,t;
void dq(int i, int j, long long s){
    if(i>n){
        kq = max(s, kq);
        return;
    }
    s+=a[i][j];
    dq(i+1,j,s);
    dq(i+1,j+1,s);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ11.INP", "r", stdin);
    freopen("DQ11.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=i; ++j){
            cin >> a[i][j];
        }
    }
    dq(1,1,0);
    cout << kq;
    return 0;
}
