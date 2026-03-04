#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,k;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    if(n<k){
        cout << -1;
        return 0;
    }
    if(n==k){
        for(int i = 1; i<=n; ++i){
            cout << 1 << " ";
        }
        return 0;
    }
    int mn1 = n-(k-1);
    if(mn1>0 && mn1%2!=0){
        for(int i = 1; i<k; ++i) cout << 1 << " ";
        cout << mn1;
        return 0;
    }
    int mn2 = n-2*(k-1);
    if(mn2>0 && mn2%2==0){
        for(int i = 1; i<k; ++i) cout << 2 << " ";
        cout << mn2;
        return 0;
    }
    cout << -1;
    return 0;
}
