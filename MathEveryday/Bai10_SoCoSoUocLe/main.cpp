#include <bits/stdc++.h>
using namespace std;
long long l,r;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r;
    long long i = ceil(sqrt(l)), j = floor(sqrt(r));
    cout << j-i+1;
    return 0;
}
