#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50000;
int n, a[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NOMIN.INP", "r", stdin);
    freopen("NOMIN.OUT", "w", stdout);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i<=n; ++i){
        kq++;
        while(i<n&&a[i]<a[i+1]) i++;
        while(i<n&&a[i]>a[i+1]) i++;
    }
    cout << kq;
    return 0;
}
