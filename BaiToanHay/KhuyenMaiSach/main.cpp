#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, a[MAXN+5], kq=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("KMS.INP", "r", stdin);
    cin >> n;
    for(long long i = 1; i<=n; ++i){
        cin >> a[i];
        kq+=a[i];
    }
    sort(a+1,a+n+1);
    for(long long i = n-2; i>=1; i-=3){
        kq-=a[i];
    }
    cout << kq;
    return 0;
}
