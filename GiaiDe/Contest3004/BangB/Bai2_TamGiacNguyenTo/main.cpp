#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
const int MAXN = 1e6;
bool check[MAXN+5];
void sang(){
    check[0] = check[1] = true;
    for(ll i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(ll j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
}
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PRIMETRI.INP", "r", stdin);
    freopen("PRIMETRI.OUT", "w", stdout);
    cin >> t;
    sang();
    while(t--){
        ull n, kq = 0;
        cin >> n;
        for(ll i = 1; i<=n-2; ++i){
            for(ll j = i+1; j<=n-1; ++j){
                for(ll k = j+1; k<=n; ++k){
                    ll c1 = j-i, c2 = k-j, c3 = k-i;
                    if((check[c1] && check[c2] && check[c3]) || (!check[c1] && !check[c2] && !check[c3])) kq++;
                }
            }
        }
        cout << kq << "\n";
    }
    return 0;
}
