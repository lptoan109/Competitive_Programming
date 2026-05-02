#include <bits/stdc++.h>
using namespace std;
string a,b;
int cnt1[26], cnt2[26];
int kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DISTANCE.INP", "r", stdin);
    freopen("DISTANCE.OUT", "w", stdout);
    cin >> a >> b;
    int na = a.size(), nb = b.size();
    for(int i = 0; i<na; ++i){
        int idx = a[i]-'a';
        cnt1[idx]++;
    }
    for(int i = 0; i<nb; ++i){
        int idx = b[i]-'a';
        cnt2[idx]++;
    }
    for(int i = 0; i<=25; ++i){
        kq+=abs(cnt1[i]-cnt2[i]);
    }
    cout << kq;
    return 0;
}
