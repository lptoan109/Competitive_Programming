#include <bits/stdc++.h>
using namespace std;

void sub1(long long n,long long m){
    long long s, kq=LONG_MAX,a,b;
    for(int i = 1; i<=n ;++i){
        cin >> a >> b;
        s = a;
        if(m>1){
            for(int j = 1; j<m; ++j){
                s+=a+b*j;
            }
        }
        kq = min(kq,s);
    }
    cout << kq;
}
void sub2(long long n, long long m){
    long long kq=LONG_MAX, s,a,b;
    for(int i = 1; i<=n; ++i){
        cin >> a >> b;
        s = (m*a)+(m*2*b);
        kq = min(kq, s);
    }
    cout << kq;
}
long long n,m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CHIPHI.INP", "r", stdin);
    freopen("CHIPHI.OUT", "w", stdout);
    cin >> n >> m;
    if(n<1000){
        sub1(n,m);
    }
    else sub2(n,m);
    return 0;
}
