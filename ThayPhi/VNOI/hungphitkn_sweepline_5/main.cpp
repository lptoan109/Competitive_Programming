#include <bits/stdc++.h>
using namespace std;
struct ds{
    int type, val, che, idx;
};
bool compare(ds a, ds b){
    if(a.val == b.val) return a.type<b.type;
    return a.val<b.val;
}
int n, m;
long long temp, kq, kqt, t, tt;
vector<ds> a;
map<int, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=m; ++i){
        int t1, t2;
        cin >> t1 >> t2;
        a.push_back({0, t1, 0, i});
        a.push_back({1, t2, 0, i});
    }
    sort(a.begin(), a.end(), compare);
    for(int i = 0; i<2*m; ++i){
        if(a[i].type == 0 && a[i].che == 0){
            temp++;
            a[i].che = 1;
            if(temp > kq){
                kq = temp;
                t = a[i].val;
            }
            cnt[a[i].idx]++;
        }
        else if(a[i].type == 1 && a[i].che == 0 && cnt.find(a[i].idx)!=cnt.end()){
            temp--;
            if(temp == kq-1){
                cout << a[i].val << " " << t << "\n";
                kqt = a[i].val - t;
            }
            a[i].che = 1;
        }
    }
    for(int i = 0; i<2*m; ++i){
        if(a[i].type == 0 && a[i].che == 0){
            temp++;
            a[i].che = 1;
            if(temp > kq){
                kq = temp;
                t = a[i].val+n;
            }
            cnt[a[i].idx]++;
        }
        else if(a[i].type == 1 && a[i].che == 0 && cnt.find(a[i].idx)!=cnt.end()){
            temp--;
            if(temp == kq-1 && kq>tt){
                cout << a[i].val+n << " " << t << "\n";
                kqt = a[i].val+n - t;
                tt = kq;
            }
            a[i].che = 1;
        }
    }
    cout << kq << "\n" << kqt;
    return 0;
}
