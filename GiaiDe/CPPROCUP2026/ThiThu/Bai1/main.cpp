#include <bits/stdc++.h>
using namespace std;
#define int long long
double n, kq;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        double a, b, c;
        cin >> a >> b >> c;
        double check = b*b-4*a*c;
        if(check>=0) kq++;
    }
    cout << kq;
    return 0;
}
