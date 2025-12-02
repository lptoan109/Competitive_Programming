#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n,x, a[MAXN+5], kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> x;
    long long l = 1, r = n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1,a+1+n);
    while(l<r){
        long long k = l+(r-l)/2;
        if(a[l]+a[r]+a[k]==x){
            cout << l << " " << k << " " << r;
            return 0;
        }
        else if(a[l]+a[r]<x){
            l++;
        }
        else r--;
    }
    return 0;
}
