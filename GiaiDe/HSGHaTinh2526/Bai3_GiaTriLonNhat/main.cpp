#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
bool compare(pair<int, int>a, pair<int, int>b){
    return a.second<b.second;
}
int n, x,y,z;
vector <pair<int, int>>a;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    cin >> n;
    for(int i = 0; i<n; ++i){
        int t;
        cin >> t;
        a.push_back({i,t});
    }
    cin >> x >> y >> z;
    sort(a.begin(),a.end(), compare);
    vector<pair<int, int>> maxx(3), minn(3);
    int j = 0;
    for(int i = n-1; i>=n-3; --i){
        maxx[j++] = make_pair(a[i].second,a[i].first);
    }
    for(int i = 0; i<=2; ++i){
        minn[i] = make_pair(a[i].second,a[i].first);
    }
    sort(maxx.begin(), maxx.end(), compare);
    sort(minn.begin(), minn.end(), compare);
    if(z<0){
        kq+=(minn[2].first*z);
    }
    else kq+=(maxx[2].first*z);
    if(y<0){
        kq+=(minn[1].first*y);
    }
    else kq+=(maxx[1].first*y);
    if(x<0){
        kq+=(minn[0].first*x);
    }
    else kq+=(maxx[0].first *x);
    cout << kq;
    return 0;
}
