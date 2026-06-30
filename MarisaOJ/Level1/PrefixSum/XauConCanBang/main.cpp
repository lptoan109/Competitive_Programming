#include <bits/stdc++.h>
using namespace std;
string s;
map<int, int> cnt;
int n, cur, kq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    n = s.size();
    cnt[0] = 1;
    for(int i = 0; i<n; ++i){
        if(s[i]=='0') cur--;
        else cur++;
        kq+=cnt[cur];
        cnt[cur]++;
        //cout << i << " : " << cur << "\n";
    }
//    for(auto &i:cnt){
//        kq+=(i.second*(i.second-1)/2);
//        cout << i.first << " " << i.second << "\n";
//    }
    cout << kq;
    return 0;
}
