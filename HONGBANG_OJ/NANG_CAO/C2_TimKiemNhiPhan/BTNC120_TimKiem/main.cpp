#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000000], b[10000000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TIMKIEM.INP", "r", stdin);
    freopen("TIMKIEM.OUT", "w", stdout);
    ll n,m;
    cin >> m >> n;
    for(int i = 0; i<m; ++i) cin >> a[i];
    sort(a,a+m);
    for(int i = 0; i<n; ++i){
        ll l = 0, r = m-1, x;
        cin >> b[i];
        x = b[i];
        bool cl = true;
        while(l<=r){
            ll m = l+(r-l)/2;
            if(a[m]==x){
                cout << "YES" << "\n";
                cl = false;
                break;
            }
                else if(a[m]<x) l=m+1;
                    else r=m-1;
        }
        if(cl) cout << "NO" << "\n";
    }

    return 0;
}
