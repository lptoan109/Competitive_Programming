#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5;
int n,a[MAXN+5],ps[MAXN+5], s, kq;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemH.INP", "r", stdin);
    freopen("ProblemH.OUT", "w", stdout);
    cin >> n;
    int t = 0;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        t+=a[i];
    }
    if(t<=s){
        cout << 0;
        return 0;
    }
    sort(a+1,a+1+n);
    for(int i = 1; i<=n; ++i){
        ps[i] = ps[i-1]+a[i];
    }
    int l = 1, r = 1;
    for(; r<=n; ++r){
        while(l<=r && ps[n]-(ps[r]-ps[l-1])<=s){
            kq = r-l+1;
            l++;
        }
    }
    cout << kq;
    return 0;
}
