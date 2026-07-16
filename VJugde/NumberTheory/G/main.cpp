#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
long long t1, a[MAXN+5], b[MAXN+5];
int n, m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i =1 ; i<=n; ++i){
        cin >> a[i];
    }
    t1 = a[n]-a[n-1];
    for(int i = n-1; i>=2; --i){
        t1 = __gcd(t1, a[i]-a[i-1]);
    }
    for(int i = 1; i<=m; ++i){
        cin >> b[i];
    }
    if(n==1 && m==1){
        cout << a[1]+b[1];
        return 0;
    }
    if(n==1){
        for(int i =1 ; i<=m; ++i){
            cout << a[1]+b[i] << " ";
        }
        return 0;
    }
    for(int i = 1; i<=m; ++i){
        cout << abs(__gcd(t1, a[1]+b[i])) << " ";
    }

    return 0;
}
