#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, q;
long long pf[MAXN+5], pf2[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        cin >> pf[i];
        pf2[i] = pf[i]*i + pf2[i-1];
        pf[i]+=pf[i-1];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << (pf2[r]-pf2[l-1]) - (l-1)*(pf[r]-pf[l-1]) << "\n";
    }
    return 0;
}
