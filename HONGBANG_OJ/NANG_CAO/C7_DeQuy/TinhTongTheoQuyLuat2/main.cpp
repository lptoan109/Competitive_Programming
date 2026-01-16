#include <bits/stdc++.h>
using namespace std;
long long squyluat(long long s){
    if(s<1) return 1;
    long long kq = 0;
    for(long long i = 1; i<s; ++i){
        kq+=i*i*squyluat(s-1);
    }
    return kq;
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ06.INP", "r", stdin);
    freopen("DQ06.OUT", "w", stdout);
    cin >> n;
    cout << squyluat(n);;
    return 0;
}
