#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CUOCPHI.INP", "r", stdin);
    freopen("CUOCPHI.OUT", "w", stdout);
    cin >> n >> t;
    if(n<=5){
        if(t==1){
            cout << 6000*n-2000;
        }
        else cout << 6000*n;
    }
    else{
        if(t==1){
            cout << (n-5)*5000 + 5*6000 - 2000;
        }
        else cout << (n-5)*5000 + 5*6000;
    }
    return 0;
}
