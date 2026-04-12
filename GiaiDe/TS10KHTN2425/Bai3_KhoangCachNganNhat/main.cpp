#include <bits/stdc++.h>
using namespace std;
int n, kq = 1e9;
bool check;
map<int, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i<n; ++i){
        int t;
        cin >> t;
        if(cnt.find(t)!=cnt.end()){
            check = true;
            kq = min(kq , abs(cnt[t]-i));
        }
        cnt[t] = i;
    }
    if(!check){
        cout << -1;
        return 0;
    }
    cout << kq;
    return 0;
}
