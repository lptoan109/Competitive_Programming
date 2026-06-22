#include <bits/stdc++.h>
using namespace std;
int n;
long long kq = 1;
int main()
{
    cin >> n;
    for(int i = 1; i<=n; ++i) kq*=i;
    cout << kq;
    return 0;
}
