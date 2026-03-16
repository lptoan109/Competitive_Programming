#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n,a[MAXN+5], ps[MAXN+5], k;
void sub1(){
    long long kq = 0;
    for(ll i = 1; i<=n; ++i){
        for(ll j = i; j<=n; ++j){
            long long t = ps[j]-ps[i-1];
            if(t>=k) kq++;
        }
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    cin >> n >> k;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = ps[i-1]+a[i];
    }
    if(n<=(long long)1e3){
        sub1();
        return 0;
    }
    return 0;
}
