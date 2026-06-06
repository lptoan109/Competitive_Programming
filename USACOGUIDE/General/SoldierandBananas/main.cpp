#include <bits/stdc++.h>
using namespace std;
long long n,k, w, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n >> w;
    for(long long i = 1; i<=w; ++i){
        kq+=(i*k);
    }
    cout << max(kq-n, 0LL);
    return 0;
}
