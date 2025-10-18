#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000000];
void nhap(ll n){
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
}
ll BinarySearch(ll n, ll x){
    ll l = 0, r = n-1,m;
    while (l<=r){
        m = l+(r-l)/2;
        if(a[m]==x) return m;
        else if(a[m]<x) l = m+1;
            else r = m-1;
    }
    return -1;
} //Nếu tìm thấy thì in ra index, nếu không thì in ra -1
// nếu lớn hơn gt cần tìm thì left = midle+1, ngược lại thì thì right = midle -1
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("BTNC133.INP","r",stdin);
    freopen("BTNC133.OUT","w",stdout);
    ll n,x;
    cin >> n;
    nhap(n);
    cin >> x;
    cout << BinarySearch(n,x);
    return 0;
}
