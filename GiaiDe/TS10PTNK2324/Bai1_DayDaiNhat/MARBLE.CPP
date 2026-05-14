#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, m, a[MAXN+5], b[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MARBLE.INP", "r", stdin);
    freopen("MARBLE.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    cin >> m;
    for(int j = 1; j<=m; ++j) cin >> b[j];
    int l = 2;
    while(a[l]>=a[l-1] && l<=n) l++;
    int r = m-1;
    while(b[r]<=b[r+1] && r>=1) r--;
    int j = r-1;
    for(int i = 1; i<l; ++i){
        while(j<=m && a[i]>b[j]) j++;
        if(j>m) break;
        kq = max(kq, i+(m-j));
    }
    cout << kq;
    return 0;
}
