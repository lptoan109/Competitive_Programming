#include <bits/stdc++.h>
using namespace std;
int nn, t,uc;
bool k = false;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("DIVALL.INP", "r", stdin);
    freopen("DIVALL.OUT", "w", stdout);
    cin >> nn;
    uc = nn;
    while(cin >> t){
        if(t!=0){
            nn = min(nn,t);
            uc = gcd(uc,t);
            k = true;
        }
    }
    if(k == false){
        cout << -1;
        return 0;
    }
    if(uc==nn){
        cout << nn;
        return 0;
    }
    cout << -1;
    return 0;
}
