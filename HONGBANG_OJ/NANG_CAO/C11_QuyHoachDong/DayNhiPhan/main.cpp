#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, kq;
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BINARY.INP", "r", stdin);
    freopen("BINARY.OUT", "w", stdout);
    cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    if(n==1){
        cout << 2;
        return 0;
    }
    if(n==2){
        cout << 3;
        return 0;
    }
    ll s1 = 2, s2 = 3;
    for(ll i = 3; i<=n; ++i){
        kq = (s1+s2)%mod;
        s1 = s2;
        s2 = kq;
    }
    cout << kq;
    return 0;
}
