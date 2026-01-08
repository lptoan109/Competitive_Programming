#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+1], kq = -1, n, d = 0;
long long t, s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    int l,r;
    l = r = 1;
    for( r = 1; r<=n; ++r){
        t+=a[r];
        while(t>s&&l<=r){
            t-=a[l];
            l++;
        }
        if(t<=s){
            kq = max(kq,r-l+1);
        }
    }
    cout << kq;
    return 0;
}
