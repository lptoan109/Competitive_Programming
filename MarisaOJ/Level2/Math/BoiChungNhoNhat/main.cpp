#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
const long long mod = (1e9)+7;
long long n, kq, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    kq = ((a[1]%mod)*((a[2]%mod)/gcd(a[1], a[2])))%mod;
    for(int i = 3; i<=n; ++i){
        kq = ((kq%mod)*((a[i]%mod)/gcd(kq,a[i])))%mod;
    }
    cout << kq;
    return 0;
}
