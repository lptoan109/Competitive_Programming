#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n,m, a[MAXN+5], l ,r, ln = INT_MIN, gt=0, vt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    for(int i = 1; i<=n; ++i){
        cin>>l>>r;
        a[l]++; a[r+1]--;
    }
    for(int i = 0; i<m; ++i){
        gt += a[i];
        if(gt>ln){
            ln = gt;
            vt = i;
        }
    }
    cout << vt << " " << ln;
    return 0;
}
