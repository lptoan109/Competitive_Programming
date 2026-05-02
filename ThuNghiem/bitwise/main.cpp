#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    cout << "NOT: " << ~t << "\n";
    cout << "LEFT SHIFT: " << (t<<2) << "\n";
    return 0;
}
