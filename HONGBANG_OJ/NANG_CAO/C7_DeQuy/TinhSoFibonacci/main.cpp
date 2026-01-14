#include <bits/stdc++.h>
using namespace std;
long long kq;
long long fibonn(long long i){
    if(i==0||i==1) return 1;
    return fibonn(i-1)+ fibonn(i-2);
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ03.INP", "r", stdin);
    freopen("DQ03.OUT", "w", stdout);
    cin >> n;
    cout << fibonn(n);
    return 0;
}
