#include <bits/stdc++.h>
using namespace std;
long long giaithua(long long n){
    long long t=1;
    for(long long i = 2; i<=n; ++i){
        t*=i;
    }
    return t;
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CSCUOI.INP", "r", stdin);
    freopen("CSCUOI.OUT", "w", stdout);
    cin >> n;
    //cout << giaithua(n) << "\n";
    cout << n/5;
    return 0;
}
