#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("PHANTHUONG.INP", "r", stdin);
    freopen("PHANTHUONG.OUT", "w", stdout);
    int n,m, ln = INT_MIN, t;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i<n; ++i){
        cin >> t;
        ln = max(ln, t);
        a[i] = ln;
    }
    cin >> m;
    vector<int> hs(m);
    for(int i = 0; i<m; ++i){
        cin >> hs[i];
        cout << a[hs[i]-1] << " ";
    }
    return 0;
}
