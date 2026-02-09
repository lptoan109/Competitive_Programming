#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int kq = -1, cur = 0;
        for(char i:s){
            if(i=='A'||i=='N'||i=='H') cur = 0;
            else{
                cur++;
                kq = max(cur,kq);
            }
        }
        cout << kq << "\n";
    }
    return 0;
}
