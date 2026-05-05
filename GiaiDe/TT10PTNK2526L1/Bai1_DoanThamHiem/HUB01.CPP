#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n, a[MAXN+5], d, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HUB01.INP", "r", stdin);
    freopen("HUB01.OUT", "w", stdout);
    cin >> n >> d;
    for(ll i = 1; i<=n; ++i) cin >> a[i];
    for(ll i = 2; i<=n; ++i){
        if(abs(a[i]-a[i-1])>d){
            //cout << a[i-1] << " " << a[i] << "\n";
            kq++;
        }
    }
    cout << kq;
    return 0;
}
