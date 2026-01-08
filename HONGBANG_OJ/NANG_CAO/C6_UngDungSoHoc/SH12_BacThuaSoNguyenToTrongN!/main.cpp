#include <bits/stdc++.h>
using namespace std;
long long n,p, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("BACNT.INP", "r", stdin);
    freopen("BACNT.OUT", "w", stdout);
    cin >> n >> p;
    for(long long i = p; i<=n; i*=p){
        kq+=(n/i);
    }
    cout << kq;
    return 0;
}
