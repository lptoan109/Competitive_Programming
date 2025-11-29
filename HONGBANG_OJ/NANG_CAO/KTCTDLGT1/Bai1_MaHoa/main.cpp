#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("MAHOA.INP", "r", stdin);
    freopen("MAHOA.OUT", "w", stdout);
    string s;
    getline(cin,s);
    int n = s.length();
    string goc = s;
    vector<string> v;
    for(int i = 0; i < n; i++){
        v.push_back(s);
        s = s.substr(1) + s[0];
    }
    sort(v.begin(), v.end());
    string kq = "";
    int k = 0;
    for(int i = 0; i < n; i++){
        kq += v[i].back();
        if(v[i] == goc){
            k = i;
        }
    }
    cout << kq << endl;
    cout << k;
    return 0;
}
