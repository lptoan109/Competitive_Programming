#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT06.INP", "r", stdin);
    freopen("BIT06.OUT", "w", stdout);
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll cnt = bitset<64>(n).count();
        if(cnt==1) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}
