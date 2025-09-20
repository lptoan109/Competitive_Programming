#include <bits/stdc++.h>
using namespace std;
int a[105][105];
long long b[105][105];
void nhap(int &n){
    cin >> n;
    for(int i = 1; i<=n; ++i)
        for(int j = 1; j<=n; ++j)
            cin >> a[i][j];
}
void xuat(int n){
    cout << n << "\n";
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j)
            cout << b[i][j]<<" ";
        cout << "\n";
    }
}
void taobang(int n){
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            b[i][j] = a[i][j] + a[i+1][j] + a[i-1][j]+ a[i][j+1] + a[i][j-1];
        }
    }
    xuat(n);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("TAOBANG.INP", "r", stdin);
    freopen("TAOBANG.OUT", "w", stdout);
    int n;
    nhap(n);
    taobang(n);
    return 0;
}
