#include <bits/stdc++.h>
using namespace std;
bool check(string k){
    bool ok1, ok2, ok3, nok;
    nok = true;
    for(char i:k) if(i!='0') nok = false;
    if(nok) return true;
    int t = 0;
    ok1 = ok2 = ok3 = false;
    for(char i:k){
        if(i=='0') ok1 = true;
        t+=(i-'0');
        if(i!='0' && ((i-'0')*10)%4==0) ok3 = true;
    }
    if(t%3==0) ok2 = true;
    //cout << k << " : " << ok1 << " " << ok2  << " " << ok3 << " ";
    return ok1 && ok2 && ok3;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        string val;
        cin >> val;
        if(check(val)) cout << "red\n";
        else cout << "cyan\n";
    }
    return 0;
}
