#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("DAYSO.INP", "r", stdin);
    freopen("DAYSO.OUT", "w", stdout);
    int x,k;
    cin >> x >> k;
    ll kq = x, t = x;
    for(int i = 1; i<=k; ++i){
        if(i == 1){
            cout << kq << " ";
            kq = 0;
        }
        else{
            while(t>0){
                kq+=(t%10)*(t%10);
                t/=10;
            }
            cout << kq << " ";
            t = kq;
            kq = 0;
        }
    }
    return 0;
}
