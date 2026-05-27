#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull poww(ull a, ull b){
    ull kq = 1;
    while(b--){
        kq*=a;
    }
    return kq;
}
ull n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LUYTHUA.INP", "r", stdin);
    freopen("LUYTHUA.OUT", "w", stdout);
    cin >> n;
    while(n--){
        ull a;
        cin >> a;
        ull b = a%10;
        a/=10;
        //cout << poww(a, b) << "\n";
        kq+=poww(a, b);
    }
    cout << kq;
    return 0;
}
