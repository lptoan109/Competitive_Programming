#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b){
    if(b==0) return 1;
    long long x = binpow(a,b/2);
    if(b%2==1){
        return x*x*a;
    }
    else return x*x;
}
long long a,b;
void sub1(){
    long long kq = 0;
    long long x = binpow(a,b);
    while(x>0){
        kq = x%10;
        x/=10;

    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LUYTHUA.INP", "r", stdin);
    freopen("LUYTHUA.OUT", "w", stdout);
    cin >> a >> b;
    sub1();
    return 0;
}
