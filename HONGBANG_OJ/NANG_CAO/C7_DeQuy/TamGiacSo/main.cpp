#include <bits/stdc++.h>
using namespace std;
const int MAXN = 30;
int n, a[MAXN+5][MAXN+5];
long long kq,t,s;
void dq(int ic, int jc, long long s){
    if(i>n){
        kq = max(s, kq);
        return;
    }
    s+=a[ic][jc];
    dq(i+1, j, s);
    dq(i+1,j+1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=i; ++j){
            cin >> a[i][j];
        }
    }
    return 0;
}
