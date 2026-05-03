#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7, MAXN = 1e5;
long long n, m, kq = 1, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(ll i = 1; i<=n; ++i){
        for(ll j = 1; j<=m; ++j){
            bool t1 = j<=a[i-1]?1:0;
            bool t2 = j<=a[i+1]?1:0;
            if(a[i-1]==0){
                if(t2)
            }
            if(j<=a[i-1]+1)
        }
    }
    cout << kq;
    return 0;
}
