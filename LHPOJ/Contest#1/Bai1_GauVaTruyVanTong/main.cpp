#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,q;
long long ps[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >> x;
        ps[i] = ps[i-1]+x;
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << ps[r]-ps[l-1] << "\n";
    }
    return 0;
}
