#include <bits/stdc++.h>
using namespace std;
int m, n ,k;
int main()
{
    cin >> m >> n >> k;
    cout << max(m, max(n, k));
    return 0;
}
