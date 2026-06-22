#include <bits/stdc++.h>
using namespace std;
int n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> kq;
    for(int i = 1; i<n; ++i){
        int t;
        cin >> t;
        kq = min(kq, t);
    }
    cout << kq;
    return 0;
}
