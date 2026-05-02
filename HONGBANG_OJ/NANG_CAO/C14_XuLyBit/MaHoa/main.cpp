#include <bits/stdc++.h>
using namespace std;
#define ll long long
string fromDecimal(long long n, int b) {
    string res = "";
    string digits = "0123456789ABCDEF";
    while (n > 0) {
        res = digits[n % b] + res;
        n /= b;
    }
    return res.empty() ? "0" : res;
}
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT02.INP", "r", stdin);
    freopen("BIT02.OUT", "w", stdout);
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        //cout << fromDecimal(n, 2) << " ";
        while(k--){
            ll pos;
            cin >> pos;
            n^=(1LL<<pos);
        }
        //cout << fromDecimal(n, 2) << " ";
        cout << n << "\n";
    }
    return 0;
}
