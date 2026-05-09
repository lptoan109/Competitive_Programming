#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, m, a[MAXN+5],b[MAXN+5], t[MAXN+5], kq, t2[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MARBLE.INP", "r", stdin);
    freopen("MARBLE.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    int cnt = 1;
    t[1] = 1;
    for(int i =2 ; i<=n; ++i){
        if(a[i]<a[i-1]){
            cnt = 1;
            t[i] = 1;
            continue;
        }
        cnt++;
        t[i] = cnt;
    }
    cin >> m;
    for(int i = 1; i<=m; ++i) cin >> b[i];
    cnt = 1;
    t2[m] = 1;
    for(int i = m-1; i>=1; --i){
        if(b[i]>b[i+1]){
            cnt = 1;
            t2[i] = 1;
            continue;
        }
        cnt++;
        t2[i] = cnt;
    }
    for(int i = 1; i<=m; ++i){
        for(int j = 1; j<i; ++j){
            if(a[j]<=b[i]) kq = max(kq, t[j]+t2[i]);
        }
    }
    cout << kq;
    return 0;
}
