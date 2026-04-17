#include <bits/stdc++.h>
using namespace std;
#define int long long
int bins(int l, int r, int k, int n){
    int ans;
    while(l<=r){
        int m = l+(r-l)/2;
        if((m-m/n)>=k){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    return ans;
}
int t;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("1352C.INP", "r", stdin);
    freopen("1352C.OUT", "w", stdout);
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << bins(1, 2*k, k, n) << "\n";
    }
    return 0;
}
