#include <bits/stdc++.h>
using namespace std;
struct ds{
    int h, t, val;
};
//bool compare(ds a, ds b){
//    return a.val<b.val;
//}
int n;
vector<ds> a;
//namespace sub2{
//    long long kq;
//    map<int, int> cnt;
//    set<int> se;
//    void solve(){
//        for(ds i:a){
//            if(i.t == 1){
//                auto it = upper_bound(se.begin(), se.end(), i.h);
//                if(it != se.end()){
//                    int te = *it;
//                    if(cnt[te]>0){
//                        kq+=(i.h-te);
//                        cout << i.val << " " << i.h << " - " << te << "\n";
//                        goto tieptuc1;
//                    }
//                }
//                kq+=i.h;
//                tieptuc1:
//                    cnt[i.h]++;
//                    se.insert(i.h);
//            }
//            else{
//                auto it = lower_bound(se.begin(), se.end(), i.h);
//                if(it != se.end()){
//                    int te = *it;
//                    if(cnt[te]>0){
//                        kq+=(i.h-te);
//                        cout << i.val << " " << i.h << " - " << te <<"\n";
//                        goto tieptuc2;
//                    }
//                }
//                kq+=i.h;
//                tieptuc2:
//                    cnt[i.h]--;
//            }
//        }
//        cout << kq;
//    }
//}
//bool check(){
//    int cnt = 0;
//    for(ds i:a){
//        if(i.t == 1){
//            if(cnt>0) return true;
//            cnt++;
//        }
//        else cnt--;
//    }
//    return false;
//}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("FLATFORM.INP", "r", stdin);
    freopen("FLATFORM.OUT", "w", stdout);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int l, r, h;
        cin >> h >> l >> r;
        a.push_back({h, 1, min(l, r)});
        a.push_back({h, 2, max(l, r)});
    }
//    sort(a.begin(), a.end(), compare);
//    if(!check()){
//        long long kq = 0;
//        for(ds i:a){
//            kq+=i.h;
//        }
//        cout << kq;
//        return 0;
//    }
//    else{
//        sub2::solve();
//    }

    long long kq = 0;
    for(ds i:a){
        kq+=i.h;
    }
    cout << kq;
    return 0;
}
