#include <bits/stdc++.h>
using namespace std;
string a,b;
map<char, int> cnt;
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
        cnt[a[i]]++;
    }
    for(int i = 0; i<nb; ++i){
        if(cnt.find(b[i])!=cnt.end()){
            cnt[b[i]]--;
        }
        else cnt[b[i]]++;
    }
    for(auto &i:cnt){
        kq+=i.second;
    }
    cout << kq;
    return 0;
}
