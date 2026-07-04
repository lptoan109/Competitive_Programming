#include <bits/stdc++.h>
using namespace std;
int n;
map<int, int> cnt1, cnt2;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int x, y;
        cin >> x >> y;
        cnt1[x]++;
        cnt2[y]++;
    }
    for(auto &i:cnt1){
        if(i.second >=3){
            long long t = i.second;
            kq+=(t*(t-1)*(t-2)/6);
        }
    }
    for(auto &i:cnt2){
        if(i.second >=3){
            long long t = i.second;
            kq+=(t*(t-1)*(t-2)/6);
        }
    }
    cout << kq;
    return 0;
}
