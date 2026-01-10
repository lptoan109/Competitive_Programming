#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int>a, pair<int, int>b){
    return a.first<b.first;
}
int n, cnt;
vector<pair<int, int>>a;
set<int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XEPBI.INP", "r", stdin);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >> x;
        a.push_back({x,i});
    }
    stable_sort(a.begin(), a.end(), compare);
    int maxx = a[0].first;
    kq.insert(a[0].second);
    for(int i = 1; i<n; ++i){
        if(a[i].first>maxx && i!=kq[i-1]+1&&i!=kq[i-1]-1){
            kq.insert(a[i].second);
            cnt++;
            maxx = a[i].first;
        }
    }
    cout << cnt << "\n";
    for(int i:kq){
        cout << i << " ";
    }
    return 0;
}
