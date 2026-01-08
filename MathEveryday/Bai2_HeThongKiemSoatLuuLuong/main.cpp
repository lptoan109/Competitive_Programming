#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,k, a[MAXN+5];
long long kq = LONG_MIN, t = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("BAI2.INP", "r", stdin);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    int l,r;
    l = r = 1;
    for(r = 1; r<=n; ++r){
        t+=a[r];
        if(r-l+1>k){
            t-=a[l];
            l++;
        }
        if(r-l+1==k){
            kq = max(kq,t);
        }
    }
    cout << kq;
    return 0;
}
