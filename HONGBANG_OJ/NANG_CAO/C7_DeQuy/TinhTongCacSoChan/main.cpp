#include <bits/stdc++.h>
using namespace std;
long long kq;
long long tongchan(long long n, long long i){
    if(i>2*n) return kq;
    kq+=i;
    return tongchan(n,i+2);
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ02.INP", "r", stdin);
    freopen("DQ02.OUT", "w", stdout);
    cin >> n;
    cout << tongchan(n,2);
    return 0;
}
