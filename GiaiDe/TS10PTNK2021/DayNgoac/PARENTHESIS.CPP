#include <bits/stdc++.h>
using namespace std;
string s;
int cntl, cntr, n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PARENTHESIS.INP", "r", stdin);
    freopen("PARENTHESIS.OUT", "w", stdout);
    cin >> s;
    for(char i:s){
        if(i=='(') cntl++;
        else cntr++;
    }
    if(s.empty()){
        cout << 0;
        return 0;
    }
    if(cntl!=cntr){
        cout << -1;
        return 0;
    }
    int n = s.size();
    int nn = 1e9, sum=0;
    for(int i = 0; i<n; ++i){
        if(s[i]=='(') sum++;
        else sum--;
        if(sum<nn){
            kq = i+1;
            nn = sum;
        }
    }
    if(nn>=0) cout << 0;
    else cout << kq;
    return 0;
}
