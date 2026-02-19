#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, a[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TICHSO.INP", "r", stdin);
    freopen("TICHSO.OUT", "w", stdout);
    cin >> n;
    for(int i = 2; i<=n; ++i){
        if(a[i]==0){
            for(int j = i; j<=n; j+=i){
                a[j]++;
            }
        }
    }
    for(int i = 1; i<=n; ++i){
        if(a[i]==2){
            kq++;
        }
    }
    cout << kq;
    return 0;
}
