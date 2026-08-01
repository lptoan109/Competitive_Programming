#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5];
long long cur, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        long long t;
        cin >> t;
        if(t<0){
            kq = max(kq, cur);
            cur = 0;
        }
        cur+=t;
    }
    cout << kq;
    return 0;
}
