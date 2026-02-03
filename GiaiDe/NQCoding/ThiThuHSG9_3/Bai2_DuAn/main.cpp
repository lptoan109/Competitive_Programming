#include <bits/stdc++.h>
using namespace std;
#define int long long
bool compare(pair<int, int> a, pair<int , int> b){
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}
int n, kq;
long long s;
vector<pair<int, int>>a;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DUAN.INP", "r", stdin);
    freopen("DUAN.OUT", "w", stdout);
    cin >> n >> s;
    for(int i = 0; i<n; ++i){
        int v,l;
        cin >> v >> l;
        a.push_back({v,l});
    }
    sort(a.begin(), a.end(), compare);
    for(int i = 0; i<n; ++i){
        if(s>=a[i].first){
            kq++;
            s+=a[i].second;
        }
    }
    cout << kq;
    return 0;
}
