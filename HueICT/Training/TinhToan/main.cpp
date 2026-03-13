#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n;
    unsigned long long k = ((n+1)/2)%mod;
    unsigned long long kq = (k*k)%mod;
    cout << kq;

    return 0;
}
