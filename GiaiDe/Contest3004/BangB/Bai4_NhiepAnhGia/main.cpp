#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
bool compare(pair<int, int>a, pair<int, int>b){
    if(a.fi == b.fi) return a.se>b.se;
    return a.fi<b.fi;
}
int n;
vector<pair<int, int>> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PHOTO.INP", "r", stdin);
    freopen("PHOTO.OUT", "w", stdout);
    cin >> n;
    for(int i = 0; i<n; ++i){
        int idx, val;
        cin >> idx >> val;
        a.push_back({idx, val});
    }
    sort(a.begin(), a.end(), compare);
    vector<int> lis;
    for(int i = 0; i<n; ++i){
        int val = a[i].se;
        auto it = lower_bound(lis.begin(), lis.end(), val);
        if(it == lis.end()) lis.push_back(val);
        else *it = val;
    }
    cout << lis.size();
    return 0;
}
