#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,k, a[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >>  n >>k;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    sort(a,a+n);
    int l = 0, r = n-1;
    while(l<=r){
        if(l!=r&&a[l]+a[r]<=k){
            l++;
            r--;
        }
        else r--;
        kq++;
    }
    cout << kq;
    return 0;
}
