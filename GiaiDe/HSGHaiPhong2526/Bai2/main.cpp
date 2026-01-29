#include <bits/stdc++.h>
using namespace std;
int n;
long long t, kq = -1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        long long x;
        cin >> x;
        t = max(x, t+x);
        kq = max(t,kq);
    }
    cout << kq;
    return 0;
}
