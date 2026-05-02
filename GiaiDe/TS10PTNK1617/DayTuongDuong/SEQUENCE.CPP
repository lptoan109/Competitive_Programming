#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const ll MAXX = 1e6;
ll t;
bool isprime[MAXX+5];
vector<ll> snt;
void sang(){
    for(ll i = 2; i*i<=MAXX; ++i){
        if(!isprime[i]){
            for(ll j = i*i; j<=MAXX; j+=i){
                isprime[j] = true;
            }
        }
    }
    for(ll i = 2; i<=MAXX; ++i) if(!isprime[i]) snt.push_back(i);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SEQUENCE.INP", "r", stdin);
    freopen("SEQUENCE.OUT", "w", stdout);
    cin >> t;
    sang();
    while(t--){
        map<ll, ll> cnta, cntb;
        ll na, nb;
        cin >> na >> nb;
        for(ll i = 1; i<=na; ++i){
            ll t;
            cin >> t;
            for(ll p:snt){
                if(p>t || t<0) break;
                while(t%p==0){
                    cnta[p]++;
                    t/=p;
                    if(t==0) break;
                }
            }
        }
        for(ll i = 1; i<=nb; ++i){
            ll t;
            cin >> t;
            for(ll p:snt){
                if(p>t || t<0) break;
                while(t%p==0){
                    cntb[p]++;
                    t/=p;
                    if(t==0) break;
                }
            }
        }
        for(auto &i:cnta){
            if(cntb.find(i.first)!=cntb.end()){
                cntb[i.first] = abs(i.second-cntb[i.first]);
            }
        }
        bool check = true;
        for(auto &i:cntb){
            if(i.second!=0){
                check = false;
                break;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}
