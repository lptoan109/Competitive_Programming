#include <bits/stdc++.h>
using namespace std;

long long y(long long);
long long z(long long);
long long y(long long n){
    if(n<1) return 1;
    return y(n-1)+z(n-1);
}
long long z(long long n){
    if(n<1) return 1;
    return n*n*y(n-1)+z(n-1);
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ07.INP","r", stdin);
    freopen("DQ07.OUT", "w", stdout);
    cin >> n;
    cout << y(n) << "\n" << z(n);
    return 0;
}
