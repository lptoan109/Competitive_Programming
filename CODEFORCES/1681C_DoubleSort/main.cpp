#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
//    freopen("Nhap.INP", "r", stdin);
//    freopen("Nhap.OUT", "w", stdout);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> a[n];
        for(int i = 1; i<=n; ++i){
            cin >> a[i].first;
        }
        for(int i = 1; i<=n; ++i){
            cin >> a[i].second;
        }
//        for(int i = 1; i<=n; ++i) cout << a[i].first << " ";
//        cout << "\n";
//        for(int i = 1; i<=n; ++i) cout << a[i].second << " ";
//        cout << "\n";
        vector<pair<int, int>> kq;
        for(int i = 1; i<n; ++i){
            for(int j = 1; j<n; ++j){
                if(a[j].first >a[j+1].first || a[j].second > a[j+1].second){
                    swap(a[j].first, a[j+1].first);
                    swap(a[j].second, a[j+1].second);
                    kq.push_back({j, j+1});
                }
            }
        }
        bool check = true;
        for(int i = 1; i<n; ++i){
            if(a[i].first>a[i+1].first || a[i].second > a[i+1].second){
                cout << -1 << "\n";
                check = false;
                break;
            }
        }
        if(check){
            cout << kq.size() << "\n";
            if(!kq.empty()){
                for(pair<int, int> i:kq){
                    cout << i.first << " " << i.second << "\n";
                }
            }
//            for(int i = 0; i<=n+1; ++i) cout << a[i].first << " ";
//            cout << "\n";
//            for(int i = 0; i<=n+1; ++i) cout << a[i].second << " ";
        }
    }
    return 0;
}
