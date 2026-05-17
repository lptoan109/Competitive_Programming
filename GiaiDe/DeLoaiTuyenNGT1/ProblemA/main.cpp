#include <bits/stdc++.h>
using namespace std;
int t, a, b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemA.INP", "r", stdin);
    freopen("ProblemA.OUT", "w", stdout);
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << abs(a-b) << "\n";
    }
    return 0;
}
