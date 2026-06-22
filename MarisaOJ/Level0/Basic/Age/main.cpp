#include <bits/stdc++.h>
using namespace std;
int d1, m1, ye1, d2, m2, y2;
int main()
{
    cin >> d1 >> m1 >> ye1 >> d2 >> m2 >> y2;
    if(ye1!=y2){
        if(ye1<y2) cout << 1;
        else cout << 2;
        return 0;
    }
    if(m1!=m2){
        if(m1<m2) cout << 1;
        else cout << 2;
        return 0;
    }
    if(d1<d2) cout << 1;
    else cout << 2;
    return 0;
}
