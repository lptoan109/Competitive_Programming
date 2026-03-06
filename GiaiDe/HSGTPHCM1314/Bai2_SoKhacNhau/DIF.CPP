#include <bits/stdc++.h>
using namespace std;
int n, kq;
map <int, int>a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DIF.INP", "r", stdin);
    freopen("DIF.OUT", "w", stdout);
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        a[t]++;
    }
    for(auto &i:a){
        if(i.second==1) kq++;
    }
    cout << kq;
    return 0;
}
