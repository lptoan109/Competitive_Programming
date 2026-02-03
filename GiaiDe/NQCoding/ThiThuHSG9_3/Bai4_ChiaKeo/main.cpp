#include <bits/stdc++.h>
using namespace std;
int n, a[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sort(a+1, a+1+n);
    long long kq = 0, s2 =0;
    for(int i = 1; i<=n; ++i){
        if(kq<=s2) kq+=a[i];
        else s2 += a[i];
    }
    cout << kq;
    return 0;
}
