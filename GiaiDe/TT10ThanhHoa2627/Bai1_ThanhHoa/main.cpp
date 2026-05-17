#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
ll n;
void sub1(){
    ld kq = 0;
    for(ll i = 2; i<=n; ++i){
        kq+=(1.0/((i-1.0)*i*1.0));
    }
    cout << fixed << setprecision(5) << kq;
}
void sub2(){
    ld kq = 0;
    for(ll i = 2; i<=min(n, 1LL*1000000); ++i){
        kq+=(1.0/((i-1.0)*i*1.0));
    }
    cout << fixed << setprecision(5) << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >>n;
    if(n<=(ll)10e6) sub1();
    else sub2();
    return 0;
}
