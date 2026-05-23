#include <bits/stdc++.h>
using namespace std;
int n, q;
map<int, vector<int>> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        cnt[t].push_back(i);
    }
    while(q--){
        int x, k;
        cin >> x>> k;
        cout << cnt[x][k-1] << "\n";
    }
    return 0;
}
