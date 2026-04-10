#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5;
int n, k, kq = -1e18, a[MAXN+5];
void sub1(){
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = k; i<=n; ++i){
        int t = 0;
        for(int j = i-k+1; j<=i; ++j){
            t+=a[j];
        }
        kq = max(kq,t);
    }
    cout << kq;
}
void sub2(){
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a[i] = a[i-1]+t;
    }
    for(int i = k; i<=n; ++i){
        kq = max(kq, a[i]-a[i-k]);
    }
    cout <<kq;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    cin >> n >> k;
    if(n<=k){
        int kq1 = 0;
        for(int i = 1; i<=n; ++i){
            int t;
            cin >> t;
            kq1+=t;
        }
        cout << kq1;
        return 0;
    }
    if(n<=100 && k<=10){
        sub1();
        return 0;
    }
    else{
        sub2();
    }
    return 0;
}
