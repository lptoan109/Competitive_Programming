#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, k, a[MAXN+5], lm[MAXN+5], rm[MAXN+5];
long long kq = 0;
int binsearch(int idx, bool mode){
    int kq = idx;
    int l,r;
    if(mode == true){
        l = 1;
        r = idx;
    }
    else{
        l = idx;
        r = n;
    }
    while(l<=r){
        int m = l+(r-l)/2;
        if(mode == true){
            if(a[idx]-a[m]<=k){
                kq = m;
                r = m-1;
            }
            else l = m+1;
        }
        else{
            if(a[m]-a[idx]<=k){
                kq = m;
                l = m+1;
            }
            else r = m-1;
        }
    }
    return kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sort(a+1,a+1+n);
    lm[0] = 0;
    rm[n+1] = 0;
    for(int i = 1; i<=n; ++i){
        lm[i] = max(lm[i-1],i-binsearch(i,true)+1);
    }
    for(int i = n-1; i>=1; --i){
         rm[i] = max(rm[i+1],binsearch(i,false)-i+1);
    }
    for(int i = 1; i<=n; ++i) kq = max(kq, 1LL*(lm[i]+rm[i+1]));
    cout << kq;
    return 0;
}
