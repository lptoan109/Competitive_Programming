#include <bits/stdc++.h>
using namespace std;
int ma[10005], mb[10005], kq[10005*10005];
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(0); cout.tie(0);
    freopen("Bai1.INP", "r", stdin);
    freopen("Bai1.OUT", "w", stdout);
    int na, nb, d = 0;
    cin >> na >> nb;
    for(int i = 0; i<na; ++i){
        cin >> ma[i];
    }
    for(int i = 0; i<nb; ++i){
        cin >> mb[i];
    }
    for(int i = 0; i<na; ++i){
        kq[d++] = ma[i];
    }
    for(int i = 0; i<nb; ++i){
        kq[d++] = mb[i];
    }
    sort(kq, kq+d);
    for(int i = 0; i<d; ++i) cout << kq[d];
    return 0;
}
