#include <bits/stdc++.h>
using namespace std;
#define ll int
const int MAXN = 2e7;
bool snt[MAXN+5];
vector<ll> temp;
void sang(){
    for(ll i = 2; i*i<=MAXN; ++i){
        if(!snt[i]){
            for(ll j = i*i; j<=MAXN; j+=i){
                snt[j] = true;
            }
        }
    }
    for(ll i = 2; i<=MAXN; ++i){
        if(!snt[i]) temp.push_back(i);
    }
}
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SYMPRIME.INP", "r", stdin);
    freopen("SYMPRIME.OUT", "w", stdout);
    cin >> t;
    sang();
    while(t--){
        ll n;
        cin >> n;
        auto it = lower_bound(temp.begin(), temp.end(), n);
        if(it==temp.begin() || *it == 3 || it == temp.end() || *it!=n){
            cout << "NO\n";
            continue;
        }
        if(*it == (*(it-1)+*(it+1))/2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
