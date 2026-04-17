#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int n,a[MAXN+5], ps[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    for(int i = 2; i<=MAXN; ++i){
        if(a[i]==0){
            for(int j = i; j<=MAXN; j+=i){
                a[j]++;
            }
        }
    }
    cin >> n;
//    for(int i = 1; i<=n; ++i){
//        cout << a[i] << " ";
//    }
//    cout << "\n";
    int t = 0;
    for(int i = 1; i<=n; ++i){
        if(a[i]==2) t = i;
        if(t==0){
            ps[i] = -1;
        }
        else ps[i] = t;
    }
    cout << ps[n-1];
    return 0;
}
