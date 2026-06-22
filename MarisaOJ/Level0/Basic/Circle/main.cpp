#include <bits/stdc++.h>
using namespace std;
double r, pi = 3.14;
int main()
{
    cin >> r;
    cout << fixed << setprecision(3) <<  round(2.0*r*pi*1000.0)/1000.0 << " " << round(r*r*pi*1000.0)/1000.0;
    return 0;
}
