#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long n, a[MAXN], ln = LONG_MIN, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(long long i = 1; i<=n; ++i){
        for(long long j = i; j<=n; j+=i){
            a[j]++;
        }
    }
    for(long long i = 1; i<=n; ++i){
        if(ln == a[i]) continue;
        if(ln<a[i]){
            kq = i;
            ln = a[i];
        }
    }
    cout << kq;
    return 0;
}
