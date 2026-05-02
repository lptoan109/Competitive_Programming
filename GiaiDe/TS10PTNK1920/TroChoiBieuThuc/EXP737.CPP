#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
#define ll long long
ll n, a[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("EXP737.INP", "r", stdin);
    freopen("EXP737.OUT", "w", stdout);
    cin >> n;
    cin >> a[1];
    ll tln = 1, tnn = 1;
    for(ll i = 2; i<=n; ++i){
        cin >> a[i];
        if((i-1)%2!=0) a[i]*=-1;
        if(a[i]>0){
            if(a[i]<=a[tln]){
                tln = i;
            }
        }
        else{
            if(a[i]<=a[tnn]){
                tnn = i;
            }
        }
    }
//    for(ll i = 1; i<=n; ++i){
//        cout << a[i] << " ";
//    }
//    cout << "\n" << tln << " " << tnn << "\n";
    a[tln]*=-1;
    a[tnn]*=-1;
    for(ll i = 1; i<=n; ++i){
        kq+=a[i];
    }
    cout << kq;
    return 0;
}
