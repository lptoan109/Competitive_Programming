#include <bits/stdc++.h>
using namespace std;
long long t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT01.INP", "r", stdin);
    freopen("BIT01.OUT", "w", stdout);
    cin >> t;
    while(t--){
        long long so, k;
        cin >> so >> k;
        cout << (long long)((so>>k)&(long long)1) << "\n";
    }
    return 0;
}
