#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int n, a[MAXN+7], kq, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MAKHOA.INP", "r", stdin);
    freopen("MAKHOA.OUT", "w", stdout);
    cin >> n;
    for(int i = 2; i<=n; ++i){
        if(a[i]==0){
            for(int j = i; j<=n; j+=i){
                a[j]++;
            }
        }
    }
    for(int i = 2; i<=n; ++i){
        if(a[i]>=t){
            t = a[i];
            kq = i;
        }
    }
    cout << kq;
    return 0;
}
