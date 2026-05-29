#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, m;
vector<int> a, b;
vector<long long> df(MAXN+5), du(MAXN+5);
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
            m = i;
            b.push_back(val);
            break;
        }
        b.push_back(val);
    }
    for(int i = 1; i<m; ++i){
        b[i]+=b[i-1];
    }
    for(int i = 0; i<n; ++i){
        int it  = distance(b.begin(), lower_bound(b.begin(), b.end(), a[i]));
        df[it+1]--;
        df[1]++;
        du[it+1] = a[i]-b[it];
    }
    for(int i = 0; i<m; ++i){
        df[i] += df[i-1];
    }
    return 0;
}
