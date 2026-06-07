#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
int n, m, limit[MAXN+5], speed[MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    cin >> n >> m;
    int l = 1;
    for(int i = 1; i<=n; ++i){
        int r, val;
        cin >> r >> val;
        limit[l] += val;
        limit[l+r] -=val;
        l += r;
    }
    for(int i = 1; i<=100; ++i){
        //cout << limit[i] << "\n";
        limit[i] +=limit[i-1];
    }
    l = 1;
    for(int i = 1; i<=m; ++i){
        int r, val;
        cin >> r >> val;
        speed[l] += val;
        speed[l+r] -=val;
        l += r;
    }
    for(int i = 1; i<=100; ++i){
        speed[i]+=speed[i-1];
        if(speed[i]>limit[i]) kq = max(kq, speed[i]-limit[i]);
        //cout << limit[i] << " "<< speed[i] << "\n";
    }
    cout << kq;
    return 0;
}
