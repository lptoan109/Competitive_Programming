#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n;
long long pf[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> pf[i];
        pf[i]+=pf[i-1];
    }
    long long cur = 0;
    for(int i = 1; i<=n; ++i){
        kq = max(pf[i]-cur, kq);
        cur = min(pf[i], cur);
    }
    cout << kq;
    return 0;
}
