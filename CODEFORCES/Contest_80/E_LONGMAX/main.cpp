#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5],ps[MAXN+5],n, q;
long long kq=0;
int main()
{
    cin >> n >> q;
    ps[0] = 0;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        ps[i] = a[i]+ps[i-1];
    }
    int l,r,x=1, y=n;
    for(int i = 1; i<=q; ++i){
        cin >> l >> r;
        x = l-1; y = r+1;
        long long tta = ps[r]-ps[l-1], tx=0,ty=0;
        kq = tta;
        while(true){
            tx = ps[r] - ps[x-1]; ty = ps[y]-ps[l-1];
            if(tx>tta){
                kq=tx;
                tta = tx;
            }
            if(tx>tta){
                kq=tx;
                tta = tx;
            }
        }
    }
    return 0;
}
