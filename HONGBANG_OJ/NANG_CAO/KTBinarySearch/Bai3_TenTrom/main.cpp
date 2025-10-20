#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TENTROM.INP", "r", stdin);
    freopen("TENTROM.OUT", "w", stdout);
    bool gn = true;
    int n,k;
    cin >> n >> k;
    for(int i = 0; i<n; ++i) cin >> a[i];
    int nn=a[0];
    for(int i = 0; i<n; ++i){
        if(a[i]!=a[i+1]) gn = false;
        if(a[i]<nn) nn=a[i];
    }
    if(gn) cout << a[0];
    else if(k==1) cout << nn;
    return 0;
}
