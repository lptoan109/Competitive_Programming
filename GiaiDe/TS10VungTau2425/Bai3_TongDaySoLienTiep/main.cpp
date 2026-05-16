#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, k, p, a[MAXN+5], ps[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k >> p;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    while(p>n){
        p-=n;
    }
    for(int i = p; i<p+k; ++i){
        int idx = i%n;
        if(idx==0) idx=n;
        kq+=a[idx];
        //cout << idx << " " << a[idx] << "\n";
    }
    cout << kq;
    return 0;
}
