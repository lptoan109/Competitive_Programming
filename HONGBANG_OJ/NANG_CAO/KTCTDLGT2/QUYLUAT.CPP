#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("QUYLUAT.INP", "r", stdin);
    freopen("QUYLUAT.OUT", "w", stdout);
    ll x, y, z;
    cin >> x >> y >> z;
    ll s = x + y;
    cout << (s - 2) * (s - 1) / 2 + y << "\n";
    ll l = 1, r = 2e9, k = 1;
    while(l <= r){
        ll m = l + (r - l) / 2;
        if(m * (m + 1) / 2 >= z){
            k = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    ll col = z - k * (k - 1) / 2;
    cout << k + 1 - col << " " << col;
    return 0;
}
