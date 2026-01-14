#include <bits/stdc++.h>
using namespace std;
long long gcd(long long s1, long long s2){
    if(s2<=0){
        return s1;
    }
    long long d = s1%s2;
    return gcd(s2,d);
}
long long m,n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ04.INP","r", stdin);
    freopen("DQ04.OUT", "w", stdout);
    cin >> m >> n;
    if(m==0){
        cout << n;
        return 0;
    }
    if(n==0){
        cout << m;
        return 0;
    }
    long long s1 = abs(max(m,n)), s2 = abs(min(m,n));
    cout << gcd(s1, s2);
    return 0;
}
