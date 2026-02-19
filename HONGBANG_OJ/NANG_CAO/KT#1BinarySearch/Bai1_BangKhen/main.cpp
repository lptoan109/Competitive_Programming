#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("BANGKHEN.INP", "r", stdin);
    freopen("BANGKHEN.OUT", "w", stdout);

    ll w, h, n;
    cin >> w >> h >> n;

    ll l = max(w,h), r = max(w,h)*n, k;
    while (l <= r) {
        ll m = l+(r-l)/2;
        if((m/w)*(m/h)>=n){
            k = m;
            r = m-1;
        }
        else l = m+1;
    }

    cout << k;

    return 0;
}
