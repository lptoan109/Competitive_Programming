#include <bits/stdc++.h>
using namespace std;
int a, b , c;
int main()
{
    cin >> a >> b >> c;
    int s1 = min({a, b, c}), s3 = max({a, b, c}), s2 = (a+b+c)-(s1+s3);
    cout << s1 << " " << s2 << " " << s3;
    return 0;
}
