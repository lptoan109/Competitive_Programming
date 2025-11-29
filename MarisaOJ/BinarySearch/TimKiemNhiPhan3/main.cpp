#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5],n,q,x1;

int BinarySeach(int x){
    int l =1, r = n, kq = -1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m]<=x){
            l = m+1;
            kq = m;
        }
        else r = m-1;
    }
    return kq;
}
int main()
{
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i<= q; ++i){
        cin >> x1;
        cout << BinarySeach(x1) << "\n";
    }
    return 0;
}
