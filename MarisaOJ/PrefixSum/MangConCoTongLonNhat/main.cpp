#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define ll long long
ll a[MAXN+5], n;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(ll i = 0; i<n; ++i){
        cin >> a[i];
    }
    ll ln = a[0], tln = a[0];
    for(int i = 1; i<n; ++i){
        tln = max(a[i], tln+a[i]);
        ln = max(ln, tln);
    }
    cout << ln;
    return 0;
}
