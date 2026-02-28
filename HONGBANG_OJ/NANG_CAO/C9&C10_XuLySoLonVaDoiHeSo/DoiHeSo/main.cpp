#include <bits/stdc++.h>
using namespace std;
long long b,h1,h2;
long long cs10;
string n;
long long todecimal(string cs, long long hs){
    long long res = 0, power = 1;
    int gh = cs.size();
    for(int i = gh-1; i>=0; --i){
        int val;
        if(cs[i]>'0' && cs[i]<'9') val = cs[i]-'0';
        else val = cs[i]-'A'+10;
        res+=val*power;
        power*=hs;
    }
    return res;
}
string fromdecimal(long long cs1, long long hs1){
    string res = "";
    string digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(cs1>0){
        res=digits[cs1%hs1]+res;
        cs1/=hs1;
    }
    if(res.empty()) return "0";

    return res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BASE.INP", "r", stdin);
    freopen("BASE.OUT", "w", stdout);
    cin >> b >> n >> h1 >> h2;
    if(b!=10){
        cs10 = todecimal(n,b);
    }
    else cs10 = stoll(n);
    for(int i = h1; i<=h2; ++i){
        string kq = fromdecimal(cs10, i);
        cout << "He dem " << i << ": " << kq << "\n";
    }
    return 0;
}
