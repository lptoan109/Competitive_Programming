#include <bits/stdc++.h>
using namespace std;
#define int unsigned int
int poww(int a, int b){
    int t = 1;
    for(int i = 1; i<=b; ++i){
        t*=a;
    }
    return t;
}
int n;
int t, kq;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    t = poww(3, n);
    kq = poww(2, t);
    cout << kq%5;
    return 0;
}
