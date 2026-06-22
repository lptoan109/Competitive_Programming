#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long a[MAXN+5], n,k, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for(int i = 0; i<n; ++i) cin >> a[i];
    sort(a,a+n);
    long long l = 0, r = 0;
    for(r = 1; r<n; ++r){
        while(a[r]-a[l]>k){
            l++;
        }
        kq = max(kq, r-l+1);
    }
    cout << kq;
    return 0;
}
