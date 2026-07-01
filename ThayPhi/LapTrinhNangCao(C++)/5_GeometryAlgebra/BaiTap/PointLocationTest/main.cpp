#include <bits/stdc++.h>
using namespace std;
#define int long long
int distance(int xa, int xb, int ya, int yb, int x, int y){
    return (ya-yb)*x+(xb-xa)*y+(xa*yb - xb*ya);
}
int t;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        if(distance(xa, xb, ya, yb, xc, yc)==0){
            cout << "TOUCH\n";
            continue;
        }
        else if(distance(xa, xb, ya, yb, xc, yc)<0){
            cout << "RIGHT\n";
        }
        else{
            cout << "LEFT\n";
        }
    }
    return 0;
}
