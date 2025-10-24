#include <bits/stdc++.h>
using namespace std;
string daohoten(string s){
    if(s.empty()) return "";
    int sl = s.size(),vt = 0;
    vt = s.rfind(' ');
    string ten;
    ten = s.substr(vt+1,sl-vt);
    string ho = s.substr(0,vt);
    if(ho==ten) return s;
    return ten+' '+ho;
}
int main()
{
    vector<string> v;
    string s;
    while(getline(cin,s)){
        if(s.empty()) continue;
        v.push_back(daohoten(s));
    }

    sort(v.begin(), v.end(), greater<string>());
    for(const string& i : v) cout << i<< "\n";
    return 0;
}
