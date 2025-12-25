#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int na,nb, kq = 0, a[MAXN+1], b[MAXN+1];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("XOASO.INP", "r", stdin);
    freopen("XOASO.OUT", "w", stdout);
    cin >> na >> nb;
    for(int i = 0; i<na; ++i) cin >> a[i];
    for(int i = 0; i<nb; ++i) cin >> b[i];
    sort(a,a+na);
    sort(b,b+nb);
    int ia = 0, ib = 0;
    while(ia<na&&ib<nb){
        if(a[ia]==b[ib]){
            kq++;
            ia++;
            ib++;
        }
        else if(a[ia]<b[ib]) ia++;
        else ib++;
    }
    cout << kq;
}
