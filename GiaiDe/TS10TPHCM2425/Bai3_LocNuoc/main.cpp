#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a, b;
vector<long long> ps;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LOCNUOC.INP", "r", stdin);
    freopen("LOCNUOC.OUT", "w", stdout);
    cin >> n >> m;
    int t = 0;
    for(int i = 1; i<=n; ++i){
        int val;
        cin >> val;
        a.push_back(val);
        t = max(t, a[i]);
    }
    long long cur = 0;
    for(int j = 1; j<=m; ++j){
        int val;
        cin >> val;
        cur +=val;
        if(cur>t){
            m = i-1;
            break;
        }
        b.push_back(val);
    }
    ps.push_back(b[0]);
    for(int i = 1; i<m; ++i){
        ps.push_back(ps[i-1]+b[i]);
    }

    return 0;
}
