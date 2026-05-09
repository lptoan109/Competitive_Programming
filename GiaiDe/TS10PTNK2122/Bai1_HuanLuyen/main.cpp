#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e5;
long long n, m, a[MAXN+5], b[MAXN+5], ps[MAXN+5];
int binsearch(int k){
    int l = 1, r = m, kqv;
    while(l<=r){
        int m = l+(r-l)/2;
        if(b[m]<=k){
            kqv = m;
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return kqv;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TRAINING.INP", "r", stdin);
    freopen("TRAINING.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        cin >>a[i];
    }
    for(int i = 1; i<=m; ++i){
        cin >> b[i];
    }
    sort(b+1, b+1+n);
    for(int i =1 ; i<=m; ++i){
        ps[i] = ps[i-1]+b[i];
    }
    for(int i = 1; i<=n; ++i){
        int vt = binsearch(a[i]);
        a[i]+=
    }
    return 0;
}
