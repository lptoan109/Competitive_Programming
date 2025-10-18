#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000000];
void bs(ll n, ll x){
    ll l = 0, r = n-1,vt;
    bool cl = true;
    while(l<=r){
        ll m = l+(r-l)/2;
        if(a[m]==x){
            while(a[m-=1]==x) vt = m;
            cout << "Vi tri dau tien cua " << x << " trong mang A la " << vt << "\n";
            cl=false;
            break;
        }
        else if(a[m]<x) r=m+1;
        else l = m-1;
    }
    if(cl) cout<< "No\nNo\n";
    else{
        while(a[vt+1]==x) vt+=1;
        cout << "Vi tri cuoi cung cua " << x << " trong mang A la " << vt << "\n";
    }
    while(l<=r){
        ll m = l+(r-l)/2;
        if(a[m]>x){
            cout <<" Vi tri cua phan tu dau tien > "<<x<<" trong mang A la " << r << ", gia tri " << a[r] << "\n";
            break;
        }
        else l = m-1;
    }
}
int main()
{
    ll n,x;
    cin>>n>>x;
    for(int i = 0; i<n; ++i) cin>>a[i];
    sort(a,a+n);
    bs(n,x);
    return 0;
}
