#include <bits/stdc++.h>
using namespace std;
long long n,m;
namespace sub1{
    const int MAXN = 5e5;
    long long a[MAXN+5], b[MAXN+5];
    void solve(){
        for(int i =0 ; i<n; ++i) cin >> a[i];
        for(int j = 0; j<m; ++j) cin >> b[j];
        sort(b, b+m);
        for(int i = 0; i<n; ++i){
            int vt = upper_bound(b, b+n, a[i]);
            for(int j )
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TRAINING.INP", "r", stdin);
    freopen("TRAINING.OUT", "w", stdout);

    return 0;
}
