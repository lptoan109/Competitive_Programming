#include <bits/stdc++.h>
using namespace std;
bool sub2(long long kq, string s, int gh){
    bool check = false;
    if(s[gh-1]=='0'||s[gh-1]=='5'){
        long long mod = 0;
        for(int j = 0; j<gh-1; ++j){
            mod = (mod+(s[j]-'0'))%5;
        }
        if(mod == 0) check = true;
    }
    return check;
}
long long n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i<n; ++i){
        string s;
        cin >> s;
        int gh = s.size();
        if(sub2(kq,s,gh)) kq++;
    }
    cout <<kq;
    return 0;
}
