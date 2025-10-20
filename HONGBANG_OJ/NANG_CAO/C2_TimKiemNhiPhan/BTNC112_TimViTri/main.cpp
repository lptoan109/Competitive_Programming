#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAXN = 1e7;
int a[MAXN + 5];
int n, x, vt=-1, t;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    ll l = 0, r = n,m;
    while(l<=r){
        m = l+(r-l)/2;
        if(a[m]==x){
            vt = m;
            r=m-1;
        }
            else if(a[m]<x) l=m+1;
                else r=m-1;
    }
    if(vt!=-1) cout << "Vi tri dau tien cua " << x <<" trong mang A la " << vt << "\n";
    else cout << "No\n";
    l = 0, r = n, vt = -1;
    while(l<=r){
        m = l+(r-l)/2;
        if(a[m]==x){
            vt = m;
            l=m+1;
        }
            else if(a[m]<x) l=m+1;
                else r=m-1;
    }
    if(vt!=-1) cout << "Vi tri cuoi cung cua " << x <<" trong mang A la " << vt << "\n";
    else cout << "No\n";
    l = 0, r = n, vt = -1;
    while(l<=r){
        m = l+(r-l)/2;
        if(a[m]>x){
            vt = m;
            r=m-1;
        }
            else l=m+1;
    }
    if(vt==-1) cout << "No\n";
    else cout << "Vi tri cua phan tu dau tien > " << x <<" trong mang A la " << vt <<", gia tri " << a[vt] << "\n";
    return 0;
}
