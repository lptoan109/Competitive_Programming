#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long n, a[MAXN+5], q, dist[MAXN+5], ps1[MAXN+5], ps2[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        dist[l]++;
        dist[r+1]-=(r-l+2);
        dist[r+2]+=(r-l+1);
    }
    dist[0] = 0;
    for(int i = 1; i<=n; ++i){
        ps1[i] = ps1[i-1]+dist[i];
    }
    for(int i = 1; i<=n; ++i){
        ps2[i] = ps2[i-1]+ps1[i];
    }
    for(int i = 1; i<=n; ++i){
        cout << a[i]+ps2[i] << " ";
    }
    return 0;
}
