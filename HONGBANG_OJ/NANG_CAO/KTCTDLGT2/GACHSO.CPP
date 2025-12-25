#include <bits/stdc++.h>
using namespace std;
bool ktsnt(int t){
    if(t==2||t==3) return true;
    for(int i = 2; i*i<=t; ++i){
        if(t%i==0) return false;
    }
    return true;
}

void sntmax(int limit, string snt){
    string ln;
    for(int i = 0; i<=limit)
}
string snt;
int n, d = 0, tam=2, limit;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("GACHSO.INP", "r", stdin);
    freopen("GACHSO.OUT", "w", stdout);
    cin >> n;
    if(n==0){
        cout << "0\n\n0\n\n0";
        return 0;
    }
    if(n%2==0) limit = n/2;
    else limit = n/2+1;

    while(1){
        if(ktsnt(tam)){
            snt += to_string(tam);
            d++;
        }
        if(d==n) break;
        tam++;
    }
    cout << snt << "\n\n";
}
