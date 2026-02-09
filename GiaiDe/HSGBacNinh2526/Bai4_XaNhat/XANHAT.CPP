#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,p, a[MAXN+5], minn[MAXN+5], kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XANHAT.INP", "r", stdin);
    freopen("XANHAT.OUT", "w", stdout);
    cin >> n >> p;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(i==1) minn[i] = a[i];
        if(i>1) minn[i] = min(minn[i-1], a[i]);
    }
    for(int i = 1; i<=n; ++i){
        int tar = a[i]-p;
        int l = 1, r = i, cur=-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(minn[m]<=tar){
                cur = m;
                r = m-1;
            }
            else l = m+1;
        }
        if(cur!=-1) kq = max(kq,i-cur);
    }
    cout << kq;
    return 0;
}
