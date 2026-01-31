#include <bits/stdc++.h>
using namespace std;
string s;
int kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> s;
    int gh = s.size();
    char c = s[0]; bool check = true;
    for(int i = 1; i<gh; ++i){
        if(s[i]==s[i-1]) kq++;
        if(s[i]!=c) check = false;
    }
    if(check == true){
        cout << gh-1;
        return 0;
    }
    cout << kq;
    return 0;
}
