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

    ll l = max(w,h), r = w*h*n, k;
    while (left <= right) {
        k = l+(r-l)/2;
        if(k*k<=(k/w)*(k/h))
    }

    cout << ans << "\n";

    return 0;
}
