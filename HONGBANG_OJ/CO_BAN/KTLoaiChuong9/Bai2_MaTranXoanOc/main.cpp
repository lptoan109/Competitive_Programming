#include <bits/stdc++.h>
using namespace std;
void nhap(long long &n, long long &x, long long &y){
    cin >> n >> x >> y;
}
void xoanoc(long long n, long long x, long long y){
    double mt[n][n], gt;
    long long v = INT_MAX;
    v = min(v,x);
    v = min(v,y);
    v = min(v,n-1-x);
    v = min(v,n-1-y);
    int l = n-2*v, b = 0, j = 1;
    for(int i = 0; i<v; ++i){
        b+=(n-j)*4;
        j+=2;
    }
    b++;
    if(x==v) gt = b+y-v;
    if(y==n-1-v) gt = b+(l-1)+x+v;
    if(x==n-1-v) gt = b+(l-1)*2+n-1-v-y;
    if(y==v) gt = b+(l-1)*3+n-1-v-x;
    cout << gt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("MATRAN.INP", "r", stdin);
    freopen("MATRAN.OUT", "w", stdout);
    long long n,x,y;
    nhap(n,x,y);
    xoanoc(n,x,y);
    return 0;
}
