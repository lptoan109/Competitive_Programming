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
    long long ln = a[0], nn = a[0];
    for(int i = 0; i<n; ++i){
        ln = max(a[i],ln);
        nn = min(a[i],nn);
        if(ln - nn<=k&&i>0){
            kq++;
        }
    }
    cout << kq;
    return 0;
}
