#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;
const ll inv = 166666668;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>> n;
    ll nmod = n%mod;
    ll kq =nmod;
    kq=(kq*((nmod+1)%mod))%mod;
    kq=(kq*((nmod+2)%mod))%mod;
    kq=(kq*inv)%mod;
    cout << kq;
    return 0;
}
