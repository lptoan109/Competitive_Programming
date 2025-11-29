#include <bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map <ll, ll> mapd;
ll tachchuso(ll n){
    ll cs=0;
    while(n>0){
        cs += (n%10)*(n%10);
        n/=10;
    }
    return cs;
}

ll h, t;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("HAPPYNUM.INP", "r", stdin);
    freopen("HAPPYNUM.OUT", "w", stdout);
    cin >> t;
    for(int i = 0; i<t; ++i){
        cin >> h;
        mapd.clear();
        while(true){
            if(h==1){
                cout << 1 << "\n";
                break;
            }
            if(mapd.find(h) != mapd.end()){
                cout << 0 << "\n";
                break;
            }
            mapd[h]++;
            h = tachchuso(h);
        }
    }
    return 0;
}
