#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n, q;
long long a[MAXN+5], kq, b[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    if(n<=1000 && q<=1000){
        while(q--){
            int l, r;
            cin >> l >> r;
            int t= 1;
            for(int i = l; i<=r; ++i){
                a[i]+=t;
                t++;
            }
        }
        for(int i = 1; i<=n; ++i){
            kq = max(kq, a[i]);
        }
        cout << kq;
        return 0;
    }
    else{
        while(q--){
            int l, r;
            cin >> l >> r;
            a[l]++;
            a[r+1]--;
            b[r+1] -=(r-l+1);
        }
        for(int i = 1; i<=n; ++i){
            a[i]+=a[i-1];
        }
        for(int i = 1; i<=n; ++i){
            a[i]+=a[i-1]+b[i];
        }
        for(int i = 1; i<=n; ++i) kq = max(kq, a[i]);
        cout << kq;
    }
    return 0;
}
