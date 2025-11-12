#include <bits/stdc++.h>
using namespace std;
const int AN = 1e3;
int n, t, a[AN+5], vt, vt2, ln = 0, ln2= 0, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("maexp.INP", "r", stdin);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(a[i]>ln){
            ln = a[i];
            vt = i;
        }
    }
    for(int i = 1; i<=n; ++i){
        if(a[i]>ln2||a[i]<ln){
            ln2 = a[i];
            vt2 = i;
        }
    }
    for(int i = 1; i<=n; ++i){
        kq+=a[i];
    }
    kq-=a[vt]-a[vt2];
    kq*=a[vt]*a[vt2];
    cout << kq;
    return 0;
}
