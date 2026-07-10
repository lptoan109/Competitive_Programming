#include <bits/stdc++.h>
using namespace std;
int t, a[105], n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        cin >>n;
        int kq1, kq2;
        kq1 = kq2 = 0;
        for(int i = 1; i<=n; ++i) cin >>a[i];
        for(int i = 1; i<n; ++i){
            for(int j = i+1; j<=n; ++j){
                if(__gcd(a[i], a[j])>kq1){
                    kq2 = kq1;
                    kq1 = __gcd(a[i], a[j]);
                }
                else if(__gcd(a[i], a[j])>kq2) kq2 = __gcd(a[i], a[j]);
//                kq2= max(kq2, __gcd(a[i], a[j]));
            }
        }
        cout << kq2 <<"\n";
    }
    return 0;
}
