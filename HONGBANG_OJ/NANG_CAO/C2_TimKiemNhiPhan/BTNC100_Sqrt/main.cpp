#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll sqrtt(ll n){
    ll l = 1, r = n/2+1, vt;
    while(l<=r){
        ll m = l+(r-l)/2, m2 = m*m;
        if(m<=n/m){
            vt=m;
            l = m+1;
        }
        else r = m-1;
    }
    return vt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n;
    cin >> n;
    ll kq = sqrtt(n);
    if(n==0) cout << "Yes\n0";
    else if(kq*kq==n){
        cout << "Yes\n" << kq;
    }
    else{
        cout << "No\n" << kq;
    }
    return 0;
}
