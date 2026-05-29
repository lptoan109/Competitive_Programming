#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long pf[MAXN+5], kq;
int n, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> pf[i];
        pf[i]+=pf[i-1];
    }
    for(int i = k; i<=n; ++i){
        kq = max(kq, pf[i]-pf[i-k]);
    }
    cout << kq;
    return 0;
}
