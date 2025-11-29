#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n,m, a[MAXN+5], b[MAXN+5];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("thu2pointer.INP", "r", stdin);
    freopen("thu2pointer.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=m; ++i) cin >> b[i];
    vector <long long> c;
    long long i = 1, j = 1;
    while(i<=n||j<=m){
        if(j==m+1||(a[i]<=b[j]&&i<=n)){
            c.push_back(a[i++]);
        }
        else{
            c.push_back(b[j++]);
        }
    }
    for(auto &val:c) cout << val << " ";
}
