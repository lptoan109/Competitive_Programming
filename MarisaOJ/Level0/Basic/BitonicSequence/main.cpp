#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5];
bool pf[MAXN+5], sf[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    pf[1] = sf[n] = true;
    for(int i = 2; i<=n; ++i){
        if(a[i]>a[i-1] && pf[i-1]) pf[i] = true;
    }
    for(int i = n-1; i>=2; --i){
        if(a[i]>a[i+1] && sf[i+1]) sf[i] = true;
    }
    //for(int i = 1; i<=n; ++i) cout << pf[i] << " " << sf[i] << "\n";
    for(int i = 1; i<=n; ++i){
        if(pf[i] && sf[i]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
