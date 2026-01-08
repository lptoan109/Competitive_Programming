#include <bits/stdc++.h>
using namespace std;
vector <string> a;
void sub1(int n, int m, int k, int x){
    string t, beg, en;
    getline(cin,t);
    cout << t << "\n";
    //int vt = t.find('#');
    //beg = t.substr(0,vt-1);
    //en = t.substr(vt+1,n-vt);
    //for(int j = 1; j<=m; ++j){
    //    string tk;
    //    getline(cin,tk);
    //    for(int i = 1; i<=k; ++i){
    //        string tam;
    //        tam+=beg+tk[i]+en;
    //        cout << tam << "\n";
    //        a.push_back(t);
    //    }
    //}
    //sort(a.begin(), a.end());
    //cout << a[x];
}
int n,m,k,x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("MATTHU.INP", "r", stdin);
    freopen("MATTHU.OUT", "w", stdout);
    cin >> n >> m >> k >> x;
    sub1(n,m,k,x);
    return 0;
}
