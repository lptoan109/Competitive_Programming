#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e7;
ll a[MAXN+5], n , k, d = 0, doant=0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    freopen("BTNC110.INP", "r", stdin);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        doant+=a[i];
        ll l = 1, r = l+i;
        while(r<=n){
            if(doant==k){
                d++;
                break;
            }
            else{
                doant = doant - a[l] + a[r];
                l++; r++;
            }
        }
    }
    cout << d;
    return 0;
}

