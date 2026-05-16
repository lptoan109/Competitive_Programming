#include <bits/stdc++.h>
using namespace std;
int c,n;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CSTRING.INP", "r", stdin);
    freopen("CSTRING.OUT", "w", stdout);
    cin >> c >> n;
    getline(cin, s);
    for(int i = 1; i<=n; ++i){
        //cout << s << " ";
        //cout << c << s.size()-c << "\n";
        s = s.substr(c, s.size()-c)+s;
    }
    cout << s;
    return 0;
}
