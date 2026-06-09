#include<bits/stdc++.h>
using namespace std;
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        //int a[4*n];
        pair<int, int> temp[n];
        map<int, int> cnt;
        for(int i = 1; i<=n; ++i){
            temp[i] = {0, 1};
        }
        for(int i = 1; i<=4*n; ++i){
            for(int j = 1; j<=n; ++j){
                if(i>temp[j].first && cnt[j]<4){
                    //a[i] = j;
                    cout << j << " ";
                    temp[j].first = i+temp[j].second;
                    temp[j].second++;
                    cnt[j]++;
                    break;
                }
            }
        }
        cout << n;
        //for(int i = 1; i<=4*n; ++i) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
