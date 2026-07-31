#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
struct ds{
    int loai, val, idx;
};
bool compare(ds a, ds b){
    if(a.val == b.val) return a.loai < b.loai;
    return a.val < b.val;
}

int n, kq, cnt, tg;
vector<ds> a;
vector<pair<int, int>> att;
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
        att.push_back({t1, t2});
        a.push_back({0, t1, i});
        a.push_back({1, t2, i});
    }
    sort(a.begin(), a.end(), compare);
    for(int i = 0; i<2*n; ++i){
        if(a[i].loai == 0){
            cnt++;
            if(cnt > kq){
                kq = cnt;
                tg = a[i].val;
            }
        }
        else{
            cnt--;
        }
    }
    cout << kq << "\n";
    int k = 1;
    for(auto &i:att){
        if(i.first<=tg && i.second >=tg) cout << k << "\n";
        k++;
    }
    return 0;
}
