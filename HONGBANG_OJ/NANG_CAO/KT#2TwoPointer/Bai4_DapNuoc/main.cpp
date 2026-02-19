#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> h;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DAM.INP", "r", stdin);
    freopen("DAM.OUT", "w", stdout);
    ll t;
    while(cin >> t) {
        h.push_back(t);
    }
    int n = h.size();
    if (n < 3) {
        cout << 0;
        return 0;
    }
    int l = 0, r = n - 1;
    ll maxl = 0, maxr = 0, kq = 0;
    while(l < r){
        if(h[l] < h[r]){
            if(h[l] >= maxl){
                maxl = h[l];
            }
            else{
                kq += maxl - h[l];
            }
            l++;
        }
        else{
            if(h[r] >= maxr){
                maxr = h[r];
            }
            else{
                kq += maxr - h[r];
            }
            r--;
        }
    }
    cout << kq;
    return 0;
}
