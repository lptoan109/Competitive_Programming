#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b;
    long long bd = ceil(sqrt(a)), kt = sqrt(b);
    for(long long i = bd; i<=kt; ++i) cout << i*i << " ";
    return 0;
}
