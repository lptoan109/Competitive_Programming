#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+5], cnt[MAXN+5], n;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("UCLN.INP", "r", stdin);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i = 1; i<=MAXN; ++i){
        for(int j = i; j<=MAXN; j+=i) cnt[i] += a[j];
    }
    for(int i = MAXN; i>=1; i--){
        if(cnt[i]>1){
            cout << i;
            return 0;
        }
    }
    return 0;
}
