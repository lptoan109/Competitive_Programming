#include <bits/stdc++.h>
using namespace std;
long long sub1(long long a, long long b, long long c, long long d){
    long long kq = 0;
    for(long long i = a; i<=b; ++i){
        if(i%c==0&&i%d==0) kq++;
    }
    return kq;
}
long long sub2(long long a, long long b, long long c, long long d){
    long long t = c*(d/gcd(c,d));
    long long kq = (b/t) - ((a-1)/t);
    return kq;
}
long long a,b,c,d;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PASS.INP", "r", stdin);
    freopen("PASS.OUT", "w", stdout);
    cin >> a >> b >> c >> d;
    long long minn = min(a,b), maxx = max(a,b);
    long long limit = 1e4;
    if((maxx-minn+1)<=limit) cout << sub1(minn,maxx,c ,d);
    else cout << sub2(minn,maxx,c,d);
    return 0;
}
