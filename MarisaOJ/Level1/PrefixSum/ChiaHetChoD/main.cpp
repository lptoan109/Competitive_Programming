#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, d, ps[MAXN+5], kq;
map<int, int> cnt;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d;
    cnt[0] = 1;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        ps[i] = abs((ps[i-1]+t)%d);
        cnt[ps[i]]++;
    }
    for(auto &i:cnt){
        kq+=(i.second*(i.second-1)/2);
        //cout << (i.second*(i.second-1)/2) << "\n";
    }
    for(int i = 1; i<=n; ++i){
        cout << ps[i] << " ";
    }
    cout << "\n";
    cout << kq;
    return 0;
}
