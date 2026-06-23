#include <bits/stdc++.h>
using namespace std;
int n, kq;
map<int, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        cnt[t]++;
    }
    for(auto &i:cnt){
        if(i.second>2) kq++;
    }
    cout << kq;
    return 0;
}
