#include <bits/stdc++.h>
using namespace std;
long long kq;
vector<string>kqc;
bool kttl(string s, string sm){
    int gh = s.size();
    unordered_map<char, int>kt;
    for(int i = 0; i<gh; ++i){
        if(s[i]<'A' || s[i]>'z'){
            return false;
        }
        if(kt.find(s[i])!=kt.end()){
            kq++;
            kqc.push_back(sm);
            return  true;
        }
        kt[s[i]]++;
    }
    return false;
}
string s, t1, t1m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DEMTUTL.INP", "r", stdin);
    freopen("DEMTUTL.OUT", "w", stdout);
    while(cin >> s){
        string st="";
        int gh = s.size();
        bool che = false;
        for(int i = 0; i<gh; ++i){
            if(s[i]<'A' || s[i]>'z'){
                che = true;
            }
            st+=tolower(s[i]);
        }
        if(che) continue;
        if(kttl(st, s)) continue;
        if(st == t1){
            kq+=2;
            kqc.push_back(t1m);
            kqc.push_back(s);
        }
        t1 = st;
        t1m = s;
    }
    cout << kq << "\n";
    for(string i:kqc) cout << i << " ";
    return 0;
}
