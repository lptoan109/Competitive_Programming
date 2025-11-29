#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
#define ll long long
ll a[MAXN+5], q, n,l ,r;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    ll ap[MAXN+5];
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        ap[i] = ap[i-1]+a[i];
    }
    cin>>q;
    if(q<=0) cout << " ";
    else{
        while(q--){
            cin >> l >> r;
            cout << ap[r]-ap[l-1] << "\n";
        }
    }
    return 0;
}
