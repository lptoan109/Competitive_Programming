#include <bits/stdc++.h>
using namespace std;
int n, p, d, a[1000+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("EVTRIP.INP", "r", stdin);
    freopen("EVTRIP.OUT", "w", stdout);
    cin >> n >> p >> d;
    if(n==0){
        if(p<d){
            cout << -1;
        }
        else cout << 0;
        return 0;
    }
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    if(p<a[1]){
        cout << -1;
        return 0;
    }
    int cur = p-a[1];
    for(int i = 1; i<n;++i){
        if(p<a[i+1]-a[i]){
            cout << -1;
            return 0;
        }
        if(cur<a[i+1]-a[i]){
            cur = p;
            kq++;
        }
        cur-=(a[i+1]-a[i]);
    }
    if(p<d-a[n]){
        cout << -1;
        return 0;
    }
    if(cur<d-a[n]){
        cout << kq+1;
        return 0;
    }
    cout << kq;
    return 0;
}
