#include <bits/stdc++.h>
using namespace std;
bool chiahet9(string t1){
    int sl = t1.size();
    long long s=0, so;
    for(int i = 0; i<sl; ++i){
        so = t1[i]-'0';
        s+=so;
    }
    return (t%9==0);
}
long long t;
string n, t1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("BTNC079.INP","r", stdin);
    cin >> t;
    cin.ignore();
    while(t--){
        t1 = "";
        while(getline(cin,n)){
            if(n!="") t1 +=n;
            else break;
        }
        if(chiahet9(t1)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
