#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
string s;
int q, a[MAXN+5];
void sub1(){
    int l,r;
    cin >> l >> r;
    int ln = 0, nn = 27;
    for(int i = l; i<=r; ++i){
        ln = max(ln,a[i]);
        nn = min(nn,a[i]);
    }
    cout << ln - nn;
}
void sub2(){
    while(q--){
        int l,r;
        cin >> l >> r;
        int ln = 0, nn = 27;
        for(int i = l; i<=r; ++i){
            ln = max(ln,a[i]);
            nn = min(nn,a[i]);
        }
        cout << ln - nn << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("KHOANGCACH.INP", "r", stdin);
    freopen("KHOANGCACH.OUT", "w", stdout);
    cin >> s;
    int gh = s.size();
    for(int i = 0; i<gh; ++i){
        char kt = 'a';
        int tt = (int)s[i] - (int)kt +1;
        a[i+1] = tt;
    }
    cin >>q;
    if(q==1){
        sub1();
        return 0;
    }
    sub2();
    return 0;
}
