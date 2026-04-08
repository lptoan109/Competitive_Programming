#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4;
bool compair(pair<ll, ll>a, pair<ll, ll>b){
    return a.second < b.second;
}
ll n, poskq[MAXN+5], kq = 1e18, vkq;
pair<ll, ll> a[MAXN+5], dp[MAXN+5];
void solution(){
    for(ll i = 1; i<n; ++i){
        ll dis = abs((dp[n].second-dp[i].second)-dp[i].second);
        //cout << dis << "\n";
        if(dis<kq){
            kq = dis;
            vkq = i;
        }
    }
    for(ll i = 1; i<=n; ++i){
        if(i<=vkq){
            poskq[dp[i].first] = 1;
        }
        else{
            poskq[dp[i].first] = 2;
        }
    }
    cout << kq << "\n";
    for(ll i = 1; i<=n; ++i){
        cout << poskq[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);
    cin >> n;
    if(n==0){
        cout << 0;
        return 0;
    }
    for(ll i = 1; i<=n; ++i){
        ll t;
        cin >> t;
        a[i] = make_pair(i, t);
    }
    sort(a+1, a+1+n, compair);
    for(ll i = 1; i<=n; ++i){
        dp[i].second = dp[i-1].second+a[i].second;
        dp[i].first = a[i].first;
    }
    solution();
    return 0;
}
