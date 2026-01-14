#include <bits/stdc++.h>
using namespace std;
long long n, t;
long long squyluat(long long s, long long i){
    if(i==n-1) return s;
    t=s;
    return squyluat(s+t,i+1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ05.INP", "r", stdin);
    freopen("DQ05.OUT", "w", stdout);
    cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    cout << squyluat(1,1);
    return 0;
}
