#include <bits/stdc++.h>
using namespace std;
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    getline(cin, s);
    int d = 1;
    char x = s[0];
    for(int i = 1; i<s.size(); ++i){
        if(s[i]!=s[i-1]){
            cout << d << x;
            d = 1;
            x = s[i];
        }
        else d++;
    }
    cout << d << x;
    cout << "\n";
    cin >> s;
    for(int i = 0; i<s.size(); i+=2){
        if('0' <= s[i] && s[i]<='9'){
            int cnt = s[i]-'0';
            while()
        }
        for(int j = 1; j<=s[i]-'0'; ++j) cout << s[i+1];
    }
    return 0;
}
