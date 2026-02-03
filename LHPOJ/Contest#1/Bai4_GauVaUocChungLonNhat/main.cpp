#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], ps[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = gcd(ps[i-1], a[i]);
    }
    int kq = a[2], val;
    for(int j = 2; j<=n; ++j){
        kq = gcd(kq,a[j]);
    }
    for(int i = 2; i<=n; ++i){
        int t = a[i-1];
        for(int j = i+1; j<=n; ++j){
            t = gcd(t,a[j]);
        }
        if(t>kq){
            kq = t;
            val = a[i];
        }
    }
    for(int i = 1; i<=n; ++i){
        if(a[i] == val) cout << a[i] << " ";
    }
    return 0;
}
