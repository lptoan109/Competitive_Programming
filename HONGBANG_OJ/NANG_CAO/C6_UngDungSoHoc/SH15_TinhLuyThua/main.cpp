#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
long long Pow(long long a, long long b) {
    long long ans = 1;
    while(b > 0){
        if(b % 2) ans = ((ans%mod)*(a%mod))%mod;
        a = ((a%mod)*(a%mod))%mod;
        b/=2;
    }
    return ans;
}
long long a,b;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("POW.INP", "r", stdin);
    freopen("POW.OUT", "w", stdout);
    cin >> a >> b;
    cout << Pow(a,b);
    return 0;
}
