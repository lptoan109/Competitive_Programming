#include <bits/stdc++.h>
using namespace std;
string s, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("XOAYVONG.INP", "r", stdin);
    freopen("XOAYVONG.OUT", "w", stdout);
    cin >> s >> t;
    int ghs = s.size(), ght = t.size();
    if(ghs!=ght){
        cout << "NO";
        return 0;
    }
    string tam = s+s;
    if(tam.find(t)!=string::npos){
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
