#include <bits/stdc++.h>
using namespace std;
string s;
int a[26], d, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("KITU.INP", "r", stdin);
    freopen("KITU.OUT", "w", stdout);
    cin >> s;
    int gh = s.size();
    for(int i = 0; i<gh; ++i) if(s[i]<='Z' && s[i] >= 'A') a[s[i]-'A']++;
    for(int i = 0; i<26; ++i){
        if(a[i]<1){
            kq = max(d,kq);
            d = 0;
            continue;
        }
        d++;
    }
    cout <<kq;
    return 0;
}
