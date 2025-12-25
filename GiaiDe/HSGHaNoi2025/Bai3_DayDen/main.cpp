#include <bits/stdc++.h>
using namespace std;
long long n,m,q,k,x;
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    freopen("DAYDEN.INP", "r", stdin);
    freopen("DAYDEN.OUT", "w", stdout);
    cin >> n >> m >> q >> k;
    long long a[n+1]={};
    while(m--){
        cin >> x;
        a[x-k]++;
        a[x+k+1]--;
    }
    long long kq[n+1]={};
    for(long long i = 1; i<=n; ++i){
        kq[i] = kq[i-1]+a[i];
    }
    while(q--){
        cin >> x;
        if(kq[x]==1) cout << "D\n";
        else cout << "V\n";
     }
    return 0;
}
