#include <bits/stdc++.h>
using namespace std;
int n,q,l,r,v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> q;
    long long a[n]={};
    while(q--){
        cin >> l >> r >> v;
        a[l]+=v;
        a[r+1]-=v;
    }
    long long d[n];
    d[0] = a[0];
    for(int i = 1; i<n; ++i){
        d[i] = d[i-1]+a[i];
    }
    for(int i = 0; i<n; ++i) cout << d[i] << " ";
    return 0;
}
