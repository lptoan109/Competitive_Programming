#include <bits/stdc++.h>
using namespace std;
long long kq = 1;
long long tong(long long n, long long i){
    if(i>n) return kq;
    kq*=i;
    return tong(n,i+1);
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ01.INP", "r", stdin);
    freopen("DQ01.OUT", "w", stdout);
    cin >> n;
    cout << tong(n, 1);
    return 0;
}
