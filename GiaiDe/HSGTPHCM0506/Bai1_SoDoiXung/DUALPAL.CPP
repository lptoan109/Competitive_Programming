#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,s, cnt;
vector <ll> kq;
bool check(ll cur, ll b){
    ll c[64];
    int t = 0;
    while(cur>0){
        c[t++] = cur%b;
        cur/=b;
    }
    for(int i = 0; i < t/2; ++i){
        if(c[i]!=c[t-1-i]) return false;
    }
    return true;
}
bool snt(ll cur){
    if(cur==2||cur==3) return true;
    if(cur%2==0||cur%3==0||cur<2) return false;
    for(ll i = 5; i*i<=cur; i+=6){
        if(cur%i==0||cur%(i+2)==0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DUALPAL.INP", "r", stdin);
    freopen("DUALPAL.OUT", "w", stdout);
    cin >> n >> s;
    ll cur = s+1;
    int limit = 0;
    while(limit<n){
        ll cntp = 0;
        for(ll i = 2; i<=16; ++i){
            if(!check(cur,i)) continue;
            cntp++;
            if(cntp>=2){
                kq.push_back(cur);
                limit++;
                break;
            }
        }
        cur++;
    }
    for(ll i:kq){
        cout << i << " ";
        if(snt(i)) cnt++;
    }
    cout << "\n" << cnt;
    return 0;
}
