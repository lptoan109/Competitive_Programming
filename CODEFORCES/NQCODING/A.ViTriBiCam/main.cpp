#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5], n, m;
map<int, int> b, check;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    cin >> m;
    for(int i = 1; i<=m; ++i){
        int t;
        cin >> t;
        b[t]++;
    }
    for(int i = 1; i<=n; ++i){
        if(b.find(a[i])!=b.end()){
            if(check.find(a[i])==check.end()){
                check[a[i]]++;
                continue;
            }
        }
        cout << a[i] << " ";
    }
    return 0;
}
