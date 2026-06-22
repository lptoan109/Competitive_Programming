#include <bits/stdc++.h>
using namespace std;
int n, ln, nn;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> ln;
    nn = ln;
    for(int i = 2; i<=n; ++i){
        int t;
        cin >> t;
        nn = min(t, nn);
        ln = max(ln, t);
    }
    cout << ln << " " << nn;
    return 0;
}
