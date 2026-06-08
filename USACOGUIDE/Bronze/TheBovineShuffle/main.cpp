#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
int n, a[MAXN+5], kq[MAXN+5], cur[MAXN+5];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        cin >> a[i];
    }
    for(int i =1 ; i<=n; ++i){
        cin >> kq[i];
    }
    for(int j = 1; j<=3; ++j){
        for(int i = 1; i<=n; ++i){
            cur[i] = kq[a[i]];
        }
        for(int i = 1; i<=n; ++i){
            //cout << cur[i] << " ";
            kq[i] = cur[i];
        }
        //cout << "\n";
    }
    for(int i = 1; i<=n; ++i){
        cout << kq[i] << "\n";
    }
    return 0;
}
