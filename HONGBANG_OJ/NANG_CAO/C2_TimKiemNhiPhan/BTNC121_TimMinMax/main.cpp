#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+5], b[MAXN+5];
int bsdt(int x, int m){
    int l = 1, r = m, vt = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==x){
            vt = mid;
            r = mid-1;
        }
        else if(a[mid]<x) l = mid+1;
        else r = mid-1;
    }
    return vt;
}
int bscc(int x, int m){
    int l = 1, r = m, vt = 0;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==x){
            vt = mid;
            l = mid+1;
        }
        else if(a[mid]<x) l = mid+1;
        else r = mid-1;
    }
    return vt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int m,n,x;
    cin >> m >> n;
    for(int i = 1; i<=m; ++i) cin >> a[i];
    sort(a+1, a+m+1);
    for(int i = 1; i<=n; ++i){
        cin >> b[i];
        x = b[i];
        int dt = bsdt(x,m), cc = bscc(x,m);
        if(dt==0||cc==0) cout << 0 << "\n";
        else{
            cout << dt << " " << cc << "\n";
        }
    }
    return 0;
}
