#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, nt, bd = 1e9;
long long a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HOSTING.INP", "r", stdin);
    freopen("HOSTING.OUT", "w", stdout);
    cin >> n;
    for(long long i = 1; i<=n; ++i){
        long long x, d, k;
        cin >> x >> d >> k;
        nt = max(nt, x+d);
        bd = min(bd, x);
        a[x]+=k;
        a[x+d]-=k;
    }
    for(long long i =bd+1; i<nt; ++i){
        a[i]+=a[i-1];
    }
    cout << a[bd] << " ";
    for(long long i = bd+1; i<nt; ++i){
        //cout << a[i] << " ";
        if(a[i]!=a[i-1]) cout << a[i] << " ";
    }
    return 0;
}
