#include <bits/stdc++.h>
using namespace std;
int n, kq, cn[105],rn[105],hn[105],gia[105], gn=10000;
bool kt(int tarc, int tarr, int tarh){
    for(int i = 1; i<=n; ++i){
        if(tarc<cn[i]&&tarr<rn[i]&&tarh<hn[i]) return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LAPTOP.IN", "r", stdin);
    freopen("LAPTOP.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> cn[i] >> rn[i] >> hn[i] >> gia[i];
    }
    for(int i = 1; i<=n; ++i){
        if(kt(cn[i], rn[i], hn[i])) continue;
        if(gia[i]<gn){
            kq = i;
            gn = gia[i];
        }
    }
    cout << kq;
    return 0;
}
