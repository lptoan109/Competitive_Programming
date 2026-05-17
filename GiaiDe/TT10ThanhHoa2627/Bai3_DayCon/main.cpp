#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
int n, u, v;
ll a[MAXN+5], ps[MAXN+5], kq = -1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> u >> v;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = ps[i-1]+a[i];
    }
    for(int i = u; i<=v; ++i){
        for(int j = i; j<=n; ++j){
            kq = max(kq, ps[j]-ps[j-i]);
        }
    }
    cout << kq;
    return 0;
}
