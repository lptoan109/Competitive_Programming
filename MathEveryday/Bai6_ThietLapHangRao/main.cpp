#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long a[MAXN+5];
bool check(long long t, long long n, long long s){
    long long tong = 0;
    for(int i = 1; i<=n; ++i){
        if(t>a[i]) tong += t-a[i];
        else tong += a[i]-t;
        if(tong>s) return false;
    }
    return tong<=s;
}
long long n, s, kq;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI6.INP", "r", stdin);
    cin >> n >> s;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    long long l,r;
    l = 0; r = 2e9;
    while(l<=r){
        long long m = l+(r-l)/2;
        if(check(m,n,s)){
            kq = m;
            l = m+1;
        }
        else r = m-1;
    }
    cout << kq;
    return 0;
}
