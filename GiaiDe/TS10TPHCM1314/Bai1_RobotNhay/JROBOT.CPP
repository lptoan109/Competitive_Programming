#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
vector<int> a;
int n, m, mt[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("JROBOT.INP", "r", stdin);
    freopen("JROBOT.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> mt[i][j];
            a.push_back(mt[i][j]);
        }
    }
    int it, jt;
    cin >> it >> jt;
    int k = mt[it][jt];
    sort(a.begin(), a.end());
    auto t = unique(a.begin(), a.end());
    a.erase(t, a.end());
    //for(int i:a) cout << i << " ";
    auto it1 = upper_bound(a.begin(), a.end(), k);
    cout << distance(it1, a.end());
    return 0;
}
