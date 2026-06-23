#include <bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    cin >> a>> b;
    cout << __gcd(a, b) << " " << a/__gcd(a, b)*b;
    return 0;
}
