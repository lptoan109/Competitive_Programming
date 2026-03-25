#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}
int n, a[MAXN+5], l[MAXN+5], r[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("KHUVUC.inp", "r", stdin);
    freopen("KHUVUC.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        l[i] = gcd(l[i-1], a[i]);
    }
    for(int i = n; i>=1; --i){
        r[i] = gcd(r[i+1], a[i]);
    }
    for(int i = 1; i<=n; ++i){
        kq = max(kq, gcd(l[i-1], r[i+1]));
    }
    cout << kq;
    return 0;
}
