#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4;
ll cnt[MAXN+5];
ll t;
void precompute(){
    for(ll a = 1; a*3<=MAXN; ++a){
        for(ll b = a+1; b*2<=MAXN; ++b){
            ll cc = a*a+b*b;
            ll c = (ll)sqrt(cc);
            if(a+b+c>MAXN) break;
            if(c*c == cc){
                cnt[a+b+c]++;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PYTAGORE.INP", "r", stdin);
    freopen("PYTAGORE.OUT", "w", stdout);
    cin >> t;
    precompute();
    while(t--){
        ll p;
        cin >> p;
        cout << cnt[p] << "\n";
    }
    return 0;
}
