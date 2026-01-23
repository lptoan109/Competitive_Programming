#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,k, a[MAXN+5];
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%d %d", &n, &k);
    for(int i = 1; i<=n; ++i){
        scanf("%d", &a[i]);
    }
    sort(a+1,a+n+1);
    for(int i= 1; i<=n; ++i){
        long long target = a[i]+k;
        auto it1=lower_bound(a+1, a+1+n, target), it2 = upper_bound(a+1, a+1+n, target);
        kq += (it2-it1);
    }
    printf("%d", kq);
    return 0;
}
