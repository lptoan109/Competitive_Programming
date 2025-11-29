#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define ll long long
ll a[MAXN+5],n,d,dem = 0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >>d;
    ll ap[n+5] = {};
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        ap[i] = ap[i-1]+a[i];
        if(ap[i]%d==0) dem++;
    }
    cout << dem;
    return 0;
}
