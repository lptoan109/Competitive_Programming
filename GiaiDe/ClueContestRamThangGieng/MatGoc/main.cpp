#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 2e5;
ll n,t, a[MAXN+5], b[MAXN+5];
ll tinh(ll x, bool check = false){
    ll tp, ttg;
    tp = ttg = 0;
    for(int i = 0; i<n; ++i){
        if(a[i]+b[i]>=x){
            ll k = min({t,b[i]+a[i]-x+1,b[i]+1});
            if(k>0){
                ttg+=k;
                tp+=k*a[i]+k*b[i]-k*(k-1)/2;
            }
        }
    }
    if(check) return ttg;
    return tp;
}
ll al = -1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n;
    for(int i = 0;i<n; ++i){
        cin >> a[i];
        al = max(al,a[i]);
    }
    for(int i = 0;i<n; ++i) cin >> b[i];
    cin >> t;
    ll l=1,h=2e18,x=h,kq=0;
    while(l<=h){
        ll m = l+(h-l)/2;
        if(tinh(m,true)<=t){
            x = m;
            h=m-1;
        }
        else l=m+1;
    }
    ll tg = tinh(x,true);
    kq = tinh(x);
    if(tg<t){
        kq+=(t-tg)*max(al,x-1);
    }
    cout << kq;
    return 0;
}
