#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    long long kq = 0;
    int bd = 0, n = s.size();
    if(s[0]=='-') bd = 1;
    for(; bd<n; ++bd){
        int cs = s[bd]-'0';
        //cout << cs << " ";
        kq+=cs;
    }
    return kq%9==0;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("BTNC079.INP", "r", stdin);
    //freopen("BTNC079.OUT", "w", stdout);
    cin >> t;
    cin.ignore();
    while(t--){
        string s  = "", temp = "";
        while(getline(cin, temp)){
            if(temp.empty()) break;
            s+=temp;
        }
        //cout << s << "\n";
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
