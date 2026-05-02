#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT04.INP", "r", stdin);
    freopen("BIT04.OUT", "w", stdout);
    cin >> t;
    while(t--){
        ll n,m, kq = 0;
        cin >> m >> n;
        ll diff = m^n;
        kq = bitset<64>(diff).count();
        cout << kq << "\n";
    }
    return 0;
}
