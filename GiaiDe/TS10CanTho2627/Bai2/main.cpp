#include <bits/stdc++.h>
using namespace std;
int n,k,kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SOLUONG.INP", "r", stdin);
    freopen("SOLUONG.OUT", "w", stdout);
    cin >> n >> k;
    for(int i =1 ; i<=n; ++i){
        int t;
        cin >> t;
        if(t<k) kq++;
    }
    cout << kq;
    return 0;
}
