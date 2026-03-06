#include <bits/stdc++.h>
using namespace std;
#define int long long
int tobin(int k){
    int kq = 0;
    while(k>0){
        int t = k%2;
        if(t==1) kq++;
        k/=2;
    }
    return kq;
}
int n;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ONE.INP", "r", stdin);
    freopen("ONE.OUT", "w", stdout);
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        cout << tobin(k) << "\n";
    }
    return 0;
}
