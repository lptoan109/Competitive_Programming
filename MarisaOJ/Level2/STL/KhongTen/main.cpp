#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], x;
long long kq;
unordered_map<int, int> b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        b[t]++;
    }
    for(int i = 1; i<=n; ++i){
        kq+=b[x-a[i]];
    }
    cout << kq;
    return 0;
}
