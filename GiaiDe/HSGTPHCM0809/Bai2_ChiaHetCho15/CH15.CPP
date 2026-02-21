#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CH15.INP", "r", stdin);
    freopen("CH15.OUT", "w", stdout);
    cin >> t;
    while(t--){
        int n, cur = 0;
        string s;
        cin >> n >> s;
        for(int i = 0; i<n; ++i){
            int bit = s[i] - '0';
            cur = (cur*2+bit)%15;
        }
        if(cur == 0) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}
