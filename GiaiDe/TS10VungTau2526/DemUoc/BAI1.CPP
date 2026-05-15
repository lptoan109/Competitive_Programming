#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, k, a[MAXN+5], kq;
void solve(){
    for(int i = 1; i<n; ++i){
        for(int j = i; j<n; j+=i) a[j]++;
    }
    for(int i = 1; i<n; ++i){
        if(a[i]==k) kq++;
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
//    freopen("BAI1.INP", "r", stdin);
//    freopen("BAI1.OUT", "w", stdout);
    cin >> n >> k;
    solve();
    return 0;
}
