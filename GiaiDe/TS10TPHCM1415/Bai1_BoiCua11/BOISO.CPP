#include <bits/stdc++.h>
using namespace std;
int check(int so){
    if(so%11!=0) return false;
    int cs1 = so%10;
    so/=10;
    int cs2 = so%10;
    so/=10;
    cs1+=(so%10);
    return cs2==cs1;
}
string s;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BOISO.INP", "r", stdin);
    freopen("BOISO.OUT", "w", stdout);
    cin >> s;
    int n = s.size();
    if(n<3){
        cout << 0;
        return 0;
    }
    for(int i = 0; i<n-2; ++i){
        int so = 0;
        for(int j = i; j<i+3; ++j){
            so=so*10+(s[j]-'0');
        }
        if(check(so)) kq++;
    }
    cout << kq;
    return 0;
}
