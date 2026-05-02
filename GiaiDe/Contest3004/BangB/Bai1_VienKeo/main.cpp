#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 3e5;
ll n, a[MAXN+5], k, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CANDIES.INP", "r", stdin);
    freopen("CANDIES.OUT", "w", stdout);
    cin >> n >> k;
    for(ll i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    ll l = 1, r = n;
    while(l<r){
        if(a[l]+a[r]<=k){
            kq++;
            l++;
            r--;
        }
        else{
            r--;
        }
    }
    cout << kq;
    return 0;
}
