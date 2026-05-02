#include <bits/stdc++.h>
using namespace std;
int kq[3];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> kq[0]>> kq[1] >>kq[2];
    sort(kq, kq+3);
    cout << kq[2]*kq[1];
    return 0;
}
