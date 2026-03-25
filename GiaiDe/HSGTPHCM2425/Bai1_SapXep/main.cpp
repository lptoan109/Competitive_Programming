#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 2e5;
int a[MAXN+5];
int mergee(int l, int m, int r){
    vector<int> tam(r-l+1);
    int i = l, j = m+1, k=0, cnt = 0;
    while(i<=m && j<=r){
        if(a[i]<=a[j]) tam[k++] = a[i++];
        else{
            tam[k++] = a[j++];
            cnt+=(m-i+1);
        }
    }
    while(i<=m){
        tam[k++] = a[i++];
    }
    while(j<=r){
        tam[k++] = a[j++];
    }
    for(int p = 0; p<k; ++p){
        a[l+p] = tam[p];
    }
    return cnt;
}
int mergesort(int l, int r){
    int cnt = 0;
    if(l<r){
        int m = l+(r-l)/2;
        cnt += mergesort(l, m);
        cnt += mergesort(m+1, r);
        cnt += mergee(l, m, r);
    }
    return cnt;
}
int n;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SAPXEP.INP", "r", stdin);
    freopen("SAPXEP.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    int kq = mergesort(1, n);
    cout << kq;
    return 0;
}
