#include <bits/stdc++.h>
using namespace std;
long long a = 1, b;
int main()
{
    cin >> b;
    long long l = ceil(sqrt(a)), r = floor(sqrt(b));
    cout << r-l+1;
    return 0;
}
