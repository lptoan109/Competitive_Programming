#include <bits/stdc++.h>
using namespace std;
int n, kq = 1e9;
map<int, int>a;
bool check;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("THREE.INP", "r", stdin);
    freopen("THREE.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a[t]++;
    }
    for(auto &i:a){
        if(i.second>=3){
            kq = min(kq, i.first);
            check = true;
        }
    }
    if(check) cout << kq;
    else cout << -1;
    return 0;
}
