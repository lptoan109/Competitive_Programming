#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,k, a[MAXN+5];
bool binsearch(int target){
    int l = 1, r = n;
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m] == target) return true;
        else if(a[m]<target) l=m+1;
        else r = m-1;
    }
    return false;
}
int kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    for(int i = 1; i<=n; ++i){
        bool c1 = binsearch(a[i]+k), c2 = binsearch(a[i]-k);
        if(c1&&c2) kq++;
    }
    cout << kq;
    return 0;
}
