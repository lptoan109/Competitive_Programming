#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, a[MAXN+5], q;
pair<int, int> t[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=q; ++i){
        int x, y;
        cin >> x >> y;
        t[i] = {x, y};
    }
    for(int i = q; i>=1; --i){
        swap(a[t[i].first], a[t[i].second]);
    }
    for(int i = 1; i<=n; ++i) cout << a[i] << " ";
    return 0;
}
