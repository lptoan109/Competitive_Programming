#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
string s;
int pf[MAXN+5], n;
map<int, int> cnt;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    n = s.size();
    if(s[0]=='0') pf[0] = -1;
    else pf[0] = 1;
    for(int i = 1; i<n; ++i){
        if(s[i]=='0') pf[i] = -1;
        else pf[i] = 1;
        pf[i]+=pf[i-1];
    }
    cnt[0]++;
    for(int i = 0; i<n; ++i){
        //cout << pf[i] << "\n";
        kq+=cnt[pf[i]];
        cnt[pf[i]]++;
    }
    cout << kq;
    return 0;
}
