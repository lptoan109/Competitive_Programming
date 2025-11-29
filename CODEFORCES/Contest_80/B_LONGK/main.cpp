#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int a[MAXN+5], n, kq;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LONGK.INP", "r", stdin);
    freopen("LONGK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];

    for(int k = 1; k<=n; ++k){
        kq = 0;
        for(int i = 1; i<n; ++i){
            if(i==k) continue;
            for(int j = n; j>i; --j){
                if(j==k) continue;
                if(a[i]==a[j]) kq++;
            }
        }
        cout << kq << "\n";
    }

    return 0;
}
