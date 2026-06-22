#include <bits/stdc++.h>
using namespace std;
long long s;
int main()
{
    cin >> s;
    long long h = s/3600;
    s-=(3600*h);
    long long m = s/60;
    s-=(m*60);
    cout << h << " " << m << " " << s;
    return 0;
}
