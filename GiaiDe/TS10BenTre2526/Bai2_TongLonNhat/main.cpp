#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, a[MAXN+5], ps[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i) cin >> a[i];
    for(int i = n; i>=1; --i){
        ps[i] = max(ps[i+1], a[i]);
    }
    for(int i = 1; i<n-1; ++i){
        for(int j = i+1; j<n; ++j){
            kq = max(kq, 3*a[i]+2*a[j]+5*ps[j+1]);
        }
    }
    cout << kq;
    return 0;
}
