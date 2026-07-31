#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, m;
set<int> temp;
vector<int> a;
int bin(int l, int r, int k){
    int kq = r+1;
    while(l<=r){
        int m = l+(r-l)/2;
        if(a[m]>=k){
            kq = m;
            r = m-1;
        }
        else l = m+1;
    }
    return kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU4.INP", "r", stdin);
    freopen("CAU4.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        temp.insert(t);
    }
    for(int i:temp) a.push_back(i);
    n = a.size();
    for(int i = 1; i<=m; ++i){
        int t;
        cin >> t;
        cout << t-1-bin(0, n-1, t) << "\n";
    }
    return 0;
}
