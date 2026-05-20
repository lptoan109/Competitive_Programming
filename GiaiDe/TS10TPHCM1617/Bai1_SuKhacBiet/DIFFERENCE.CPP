#include <bits/stdc++.h>
using namespace std;
int n, kq;
string s;
map<char, int> cnt;
bool check;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DIFFERENCE.INP", "r", stdin);
    freopen("DIFFERENCE.OUT", "w", stdout);
    cin >> n >> s;
    if(n>26){
        cout << -1;
        return 0;
    }
    for(int i = 0; i<n; ++i){\
        cnt[s[i]]++;
    }
    for(auto &i:cnt){
        if(i.second>0) kq+=(i.second-1);
    }
    cout << kq;
    return 0;
}
