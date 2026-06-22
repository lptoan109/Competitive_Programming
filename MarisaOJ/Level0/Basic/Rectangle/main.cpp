#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if(a!=b && a!=c) cout << a;
    else if(b!=a && b!=c) cout << b;
    else if(c!=a && c!=b) cout << c;
    else cout << a;
    return 0;
}
