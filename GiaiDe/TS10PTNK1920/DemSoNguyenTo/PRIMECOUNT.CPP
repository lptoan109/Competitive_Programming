#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e7;
ll a[MAXN+5], t;
bool snt[MAXN+5];
void sang(){
    snt[0] = snt[1] = true;
    for(ll i = 2; i*i<=MAXN; ++i){
        if(!snt[i]){
            for(ll j = i*i; j<=MAXN; j+=i){
                snt[j] = true;
            }
        }
    }
    for(ll i = 1; i<=MAXN; ++i){
        ll t = 0;
        if(!snt[i]){
            t = 1;
        }
        a[i] = a[i-1]+t;
    }
}
bool checksnt(ll k){
    if(k==2 || k==3) return true;
    if(k%2==0 || k%3==0 || k<2) return false;
    for(ll i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0) return false;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PRIMECOUNT.INP", "r", stdin);
    freopen("PRIMECOUNT.OUT", "w", stdout);
    sang();
//    for(ll i = 1; i<=50; ++i){
//        cout << snt[i] << " " << a[i] << " _ ";
//    }
//    cout << "\n";
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        if(r<=MAXN){
            cout << a[r]-a[l-1] << "\n";
        }
        else{
            ll kq = 0;
            for(ll i = l; i<=r; ++i){
                if(checksnt(i)) kq++;
            }
            cout << kq << "\n";
        }
    }
    return 0;
}
