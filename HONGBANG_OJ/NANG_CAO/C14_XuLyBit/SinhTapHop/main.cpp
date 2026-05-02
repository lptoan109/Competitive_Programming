#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
string s;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT07.INP", "r", stdin);
    freopen("BIT07.OUT", "w", stdout);
    getline(cin, s);
    ll n = s.size();
    ll limit = (1ULL<<n);
    for(ll i = 1; i<limit; ++i){
        ll t = i, pos = 0;
        string kq = "";
        while(t>0){
            if(t&1) kq +=s[pos];
            pos++;
            t>>=1;
        }
        cout << kq << "\n";
    }
    return 0;
}
