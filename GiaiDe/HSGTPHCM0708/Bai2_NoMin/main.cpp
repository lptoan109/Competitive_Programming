#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50000;
int n, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NOMIN.INP", "r", stdin);
    freopen("NOMIN.OUT", "w", stdout);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        cin >> a[i];
    }
    int l = 1, r = n;
    a[0] = 0;
    a[n+1] = 0;
    while(a[l]>a[l-1] && l<=n){
        l++;
    }
    while(a[r]>a[r+1] && r>=1) r--;
    if(l<=r){
        cout << l << " " << r << "\n";
        cout << r-l+1;
        return 0;
    }
    else{
        cout << 2;
    }
    return 0;
}
