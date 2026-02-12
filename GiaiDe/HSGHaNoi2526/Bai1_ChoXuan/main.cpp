#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    int kq = n-(k*7);
    if(kq<0) cout << -1;
    else cout << kq;
    return 0;
}
