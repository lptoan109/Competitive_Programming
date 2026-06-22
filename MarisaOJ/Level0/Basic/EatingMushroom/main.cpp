#include <bits/stdc++.h>
using namespace std;
int x, y, kq;
int main()
{
    cin >> x >> y;
    if(x<=6) kq+=min(6-x+1, y);
    y-=(kq+2);
    if(y>0){
        kq+=(y/7*5);
        y%=7;
        kq+=min(6, y);
    }
    cout << kq;
    return 0;
}
