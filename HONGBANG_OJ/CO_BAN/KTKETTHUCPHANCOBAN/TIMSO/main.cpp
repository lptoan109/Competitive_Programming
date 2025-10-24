#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int demcs(ll n, ll &t){
    int d=0;
    t = 0;
    while(n>0){
        d++;
        t+=n%10;
        n/=10;
    }
    return d;
}
ll timso(ll n){
    ll ta, tb;
    int sla = demcs(n,ta);
    ll gh=1;
    for(int i = 1; i<sla; ++i) gh*=10;
    for(ll i = n-1; i>=gh; --i){
        int slb = demcs(i,tb);
        if(sla==slb && ta==tb){
            return i;
        }
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TIMSO.INP", "r", stdin);
    freopen("TIMSO.OUT", "w", stdout);
    ll n;
    cin >> n;
    cout << timso(n);
    return 0;
}
