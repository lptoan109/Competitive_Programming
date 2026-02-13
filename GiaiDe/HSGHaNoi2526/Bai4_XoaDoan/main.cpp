#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n,s,a[MAXN+5], tong;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XOADOAN.INP", "r", stdin);
    freopen("XOADOAN.OUT", "w", stdout);
    cin >> n;
    ll ps[n+1];
    ps[0] = 0;
    bool check = true;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = ps[i-1]+a[i];
        if(a[i]<0) check = false;
    }
    cin >> s;
    if(check){
        sub1();
        return 0;
    }
    return 0;
}
