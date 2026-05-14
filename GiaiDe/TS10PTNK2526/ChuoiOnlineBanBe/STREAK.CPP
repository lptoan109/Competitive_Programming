#include <bits/stdc++.h>
using namespace std;
int t, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("STREAK.INP", "r", stdin);
    freopen("STREAK.OUT", "w", stdout);
    cin >> t;
    int d = 0;
    while(t--){
        string s;
        cin >> s;
        if(s=="ONLINE"){
            d++;
            kq = max(kq, d);
            continue;
        }
        d = 0;
    }
    cout << kq;
    return 0;
}
