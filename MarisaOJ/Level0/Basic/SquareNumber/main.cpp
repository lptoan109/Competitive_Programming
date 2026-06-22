#include <bits/stdc++.h>
using namespace std;
long long a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a;
    double t = round(sqrt(1.0*a));
    //cout << t << "\n";
    if(t*t==(double)a) cout << "YES";
    else cout << "NO";
    return 0;
}
