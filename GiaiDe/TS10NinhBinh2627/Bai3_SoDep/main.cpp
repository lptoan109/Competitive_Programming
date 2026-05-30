#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int a[MAXN+5], l, r, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r;
    for(int i = 1; i<=r; ++i){
        for(int j = i; j<=r; j+=i){
            a[j]++;
        }
    }
    for(int i = l; i<=r; ++i){
        if(a[i]==4) kq++;
    }
    cout << kq;
    return 0;
}
