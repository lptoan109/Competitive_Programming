#include <bits/stdc++.h>
using namespace std;
map<char, int>a, b;
long long kq = 1e18;
string s,t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI0.INP", "r", stdin);
    freopen("BAI0.OUT", "w", stdout);
    cin >> s >> t;
    int ghs = s.size(), ght = t.size();
    for(int i = 0; i<ghs; ++i){
        a[s[i]]++;
    }
    for(int i = 0; i<ght; ++i){
        b[t[i]]++;
    }
    for(auto &i:b){
        if(a.find(i.first)==a.end() && a[i.first]<i.second){
            cout << 0;
            return 0;
        }
        kq = min(kq, (long long)a[i.first]/i.second);
    }
    cout << kq;
    return 0;
}
