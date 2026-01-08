#include <bits/stdc++.h>
using namespace std;
long long n, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("PUP.INP", "r", stdin);
    freopen("PUP.OUT", "w", stdout);
    cin >> n;
    for(long long i = 1; i<=n;++i){
        kq+=i;
    }
    cout << kq;
    return 0;
}
