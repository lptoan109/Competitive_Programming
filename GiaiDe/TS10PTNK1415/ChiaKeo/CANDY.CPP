#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5], n, m;
void sub1(){
    for(int i = 1; i<=m; ++i){
        int nn = 1e9, nj;
        for(int j = 1; j<=n; ++j){
            if(a[j]<nn){
                nn = a[j];
                nj = j;
            }
        }
        a[nj]++;
    }
    for(int i = 1; i<=n; ++i){
        cout << a[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CANDY.INP", "r", stdin);
    freopen("CANDY.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    sub1();
    return 0;
}
