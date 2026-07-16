#include <bits/stdc++.h>
using namespace std;
long long giaithua(long long k){
    long long kq = 1;
    for(long long i = 2; i<=k; ++i) kq*=i;
    return kq;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n, a[15];
        cin >> n;
        for(int i = 1; i<=n; ++i) cin >> a[i];
        //long long kq = giaithua(10-n)/giaithua((10-n)-2);
        //kq+=giaithua(4)/giaithua(4-2)*2;
        long long kq = (10-n)*(10-n-1)/2;
        kq*=4*3/2;
        cout << kq <<"\n";
    }
    return 0;
}
