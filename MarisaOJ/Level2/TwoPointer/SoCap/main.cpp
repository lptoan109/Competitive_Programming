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
    while(l<r){
        if(a[l]+a[r]==x){
            l++;
            r--;
            kq++;
        }
        else if(a[l]+a[r]<x){
            l++;
        }
        else r--;
    }
    cout << kq;
    return 0;
}
