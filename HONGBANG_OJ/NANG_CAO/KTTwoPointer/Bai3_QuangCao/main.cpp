#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e7;
int n;
ll kq, a[MAXN+5], ln = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    freopen("ADV.INP", "r", stdin);
    freopen("ADV.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    int l = 1, r = n;
    while(l<r){
        ll d = min(a[l],a[r]), ro = r-l;
        kq = d*ro;
        if(kq>ln) ln = kq;
        if(a[l]<a[r]) l++;
        else r--;
    }
    cout << ln;
    return 0;
}
