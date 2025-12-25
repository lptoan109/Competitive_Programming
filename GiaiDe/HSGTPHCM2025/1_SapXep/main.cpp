#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
long long n,a[MAXN+5], kq = 0;;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SAPXEP.INP", "r", stdin);
    freopen("SAPXEP.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    int i = 1, j = 2;
    while(i<=n){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
            kq++;
        }
        j++;
    }
    cout << kq;
    return 0;
}
