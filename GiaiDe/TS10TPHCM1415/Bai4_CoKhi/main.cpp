#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}
int n, l;
vector<int> a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("COKHI.INP", "r", stdin);
    freopen("COKHI.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t1, t2;
        cin >> t1 >> t2;
        a[t1].push_back(t2);
        l = max(l, t1);
    }
    for(int i = )
    return 0;
}
