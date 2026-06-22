#include <bits/stdc++.h>
using namespace std;
int a, b, c;
long long kq = 1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    for(int i = 1; i<=b; ++i){
        kq=(kq*a)%c;
    }
    cout << kq%c;
    return 0;
}
