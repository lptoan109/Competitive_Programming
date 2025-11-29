#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("GIAIMA.INP", "r", stdin);
    freopen("GIAIMA.OUT", "w", stdout);
    string s;
    getline(cin, s)
    int k,n = s.length();
    cin >> k;
    vector<pair<char, int>> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = {s[i], i};
    }
    sort(v.begin(), v.end());
    string kq = "";
    int vt = k;
    for(int i = 0; i < n; i++){
        kq += v[vt].first;
        vt = v[vt].second;
    }
    cout << kq;
    return 0;
}
