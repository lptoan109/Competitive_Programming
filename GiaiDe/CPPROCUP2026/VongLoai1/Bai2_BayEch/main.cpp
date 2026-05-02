#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 2e5;
ll n, kq, cnt[MAXN+5];
map<ll, ll> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        if(t<=n){
            a[t]++;
        }
    }
    if(a.empty()){
        cout << 0;
        return 0;
    }
    for(auto &i:a){
        for(ll t = i.first; t<=n; t+=i.first){
            cnt[t]+=i.second;
        }
    }
    for(ll i = 1; i<=n; ++i){
        kq = max(kq, cnt[i]);
    }
    cout << kq;
    return 0;
}
