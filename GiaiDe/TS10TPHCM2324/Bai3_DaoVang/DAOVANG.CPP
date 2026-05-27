#include <bits/stdc++.h>
using namespace std;
int n, k;
namespace sub1{
    int nn = 1e9, ln;
    void solve(){
        for(int i = 1; i<=n; ++i){
            int t;
            cin >> t;
            ln = max(ln, t);
            nn = min(nn, t);
        }
        cout << (ln-nn+1)/2;
    }
}
namespace sub2{
    const int MAXN = 50000;
    int a[MAXN+5];
    bool check(int r){
        int cp = a[1]+2*r, d = 1;
        for(int i = 2; i<=n; ++i){
            if(a[i]>cp){
                d++;
                cp = a[i]+2*r;
            }
        }
        return d<=k;
    }
    int binsearch(){
        int l = 1, r = (a[n]-a[1]+1)/k, kq = 1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(check(m)){
                kq = m;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        return kq;
    }
    void solve(){
        for(int i = 1; i<=n; ++i) cin >> a[i];
        sort(a+1, a+1+n);
        cout << binsearch();
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAOVANG.INP", "r", stdin);
    freopen("DAOVANG.OUT", "w", stdout);
    cin >> n >> k;
    if(n==1 || n==k){
        cout << 0;
        return 0;
    }
    if(k==1){
        sub1::solve();
        return 0;
    }
    sub2::solve();
    return 0;
}
