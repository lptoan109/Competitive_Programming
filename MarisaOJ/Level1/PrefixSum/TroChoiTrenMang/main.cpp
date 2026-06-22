#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long a[MAXN+5], n, t1, t2, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    long long ps[n+5];
    ps[0]=0;
    for(int i = 1; i<=n; ++i) ps[i] = a[i]+ps[i-1];
    kq = a[1]*-1;
    for(int i = 2; i<=n; ++i){
        t1 = (ps[i]-ps[0])*(-1)+(ps[n]-ps[i]);
        t2 = (ps[i]-ps[0])+(ps[n]-ps[i])*(-1);
        kq = max(kq, max(t1,t2));
    }
    cout << kq;
    return 0;
}
