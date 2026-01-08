#include <bits/stdc++.h>
using namespace std;
vector<pair<char, int>> a;
string s;
int sl;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI4.INP", "r", stdin);
    getline(cin,s);
    int i = 0, n = s.size();
    while(i<n){
        if(isalpha(s[i])){
            if(i+1>=n){
                a.push_back(make_pair(s[i],1));
                break;
            }
            if(isdigit(s[i+1])){
                sl = s[i+1]-'0';
                a.push_back(make_pair(s[i],sl));
                i+=2;
                continue;
            }
            else{
                a.push_back(make_pair(s[i],1));
                i++;
                continue;
            }
        }
    }
    for(auto &i:a){
        for(int j = 1; j<=i.second; ++j){
            cout << i.first;
        }
    }
    return 0;
}
