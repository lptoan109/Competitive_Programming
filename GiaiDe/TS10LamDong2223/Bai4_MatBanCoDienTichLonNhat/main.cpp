#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e2;
long long n, kq=1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        long long so;
        cin >> so;
        kq = min(kq, so);
    }
    cout << kq*n;
    return 0;
}
