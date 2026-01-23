#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long n, m , a[MAXN+5], maxx = -1;
bool check(long long h){
    long long t = 0;
    for(int i = 1; i<=n; ++i){
        if(a[i]>h){
            t+=(a[i]-h);
            if(t>m) return true;
        }
    }
    return t>=m;
}
long long binsearh(){
    long long l = 1, r = maxx, kq;
    while(l<=r){
        long long m = l+(r-l)/2;
        if(check(m)){
            kq = m;
            l = m+1;
        }
        else r = m-1;
    }
    return kq;
}
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%lld %lld", &n, &m);
    for(int i = 1; i<=n; ++i){
        scanf("%lld", &a[i]);
        maxx = max(maxx, a[i]);
    }
    printf("%lld", binsearh());
    return 0;
}
