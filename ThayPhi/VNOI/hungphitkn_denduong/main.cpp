#include <bits/stdc++.h>
using namespace std;
long long d1, a, d2, b, k;
int main()
{
    cin >> d1 >> a>> d2 >> b >> k;
    long long l = min((long long)1e5, max(a, b)), r = l+k;
    if(r<max(a, b)){
        cout << 0;
        return 0;
    }
    cout << r/(d1*d2/__gcd(d1, d2)) - max(a, b)-1/(d1*d2/__gcd(d1, d2));
    return 0;
}
