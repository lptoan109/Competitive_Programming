#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e7;
ll a[MAXN+5], n,k, kq;
bool cl = true;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BTNC097.INP", "r", stdin);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    ll l = 1, r = n;
    while(l<=r){
        kq = a[l]+a[r];
        if(kq==k){
            cout << l << " " << r;
            cl=false;
            break;
        }
        else if(kq<k) l++;
        else r--;
    }
    if(cl) cout << -1;
    return 0;
}
