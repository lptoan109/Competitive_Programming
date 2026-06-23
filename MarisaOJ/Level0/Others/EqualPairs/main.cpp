#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, cnt[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        kq+=cnt[t];
        cnt[t]++;
    }
    cout << kq;
    return 0;
}
