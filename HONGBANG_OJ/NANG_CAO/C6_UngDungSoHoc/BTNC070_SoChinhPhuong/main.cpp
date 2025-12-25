#include <bits/stdc++.h>
using namespace std;
long long a,b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> a >> b;
    long long l = ceil(sqrt(a)), r = sqrt(b);
    for(long long i = l; i<=r; ++i){
        cout << i*i << " ";
    }
    return 0;
}
