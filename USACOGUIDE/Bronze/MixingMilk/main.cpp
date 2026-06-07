#include <bits/stdc++.h>
using namespace std;
pair<int, int> a[5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    for(int i = 1; i<=3; ++i){
        int m, val;
        cin >> m >> val;
        a[i].first = m;
        a[i].second = val;
    }
    int cur = 1, tar = 2;
    for(int i = 1; i<=100; ++i){
        int ls = min(a[cur].second, a[tar].first - a[tar].second);
        a[cur].second -= ls;
        a[tar].second += ls;
        if(cur==3) cur = 0;
        if(tar==3) tar = 0;
        cur++;
        tar++;
    }
    for(int i = 1; i<=3; ++i){
        cout << a[i].second << "\n";
    }
    return 0;

}
