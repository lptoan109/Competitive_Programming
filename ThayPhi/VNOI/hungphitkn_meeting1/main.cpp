#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
bool compare(pair<int, int> a, pair<int, int>b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
int n, kq, cnt;
vector<pair<int, int>> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("meeting.inp", "r", stdin);
    freopen("meeting.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back({0, t1});
        a.push_back({1, t2});
    }
    sort(a.begin(), a.end(), compare);
    for(int i = 0; i<2*n; ++i){
        tieptuc:
            if(a[i].first == 0){
                cnt++;
                kq = max(kq, cnt);
            }
            else{
                cnt--;
            }

        if(a[i+1].second == a[i].second && i<2*n){
            i++;
            goto tieptuc;
        }
    }
    cout << kq;
    return 0;
}
