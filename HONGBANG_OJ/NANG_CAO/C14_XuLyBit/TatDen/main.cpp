#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT03.INP", "r", stdin);
    freopen("BIT03.OUT", "w", stdout);
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll kq = __builtin_popcountll(n);
        cout << kq << "\n";
    }
    return 0;
}
