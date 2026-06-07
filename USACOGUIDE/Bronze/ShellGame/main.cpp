#include <bits/stdc++.h>
using namespace std;
pair<int, int> a[105];
int n, g[105], kq;
int init(int so1, int so2, int so3){
    int cnt = 0, ds[5] = {0, so1, so2, so3};
    for(int i = 1; i<=n; ++i){
        swap(ds[a[i].first], ds[a[i].second]);
        cnt+=ds[g[i]];
    }
    //cout << cnt << "\n";
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int s1, s2, val;
        cin >> s1 >> s2 >> val;
        a[i] = {s1, s2};
        g[i] = val;
    }
    kq = max(kq, init(1, 0, 0));
    kq = max(kq, init(0, 1, 0));
    kq = max(kq, init(0, 0, 1));
    cout << kq;
    return 0;
}
