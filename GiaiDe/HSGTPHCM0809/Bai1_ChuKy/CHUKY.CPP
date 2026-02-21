#include <bits/stdc++.h>
using namespace std;
#define int long long
int l,r, ln = -1e9, nn = 1e9;
int hang[1000005];
int tt(int k){
    if(k%2==0){
        return k/2;
    }
    else return k*3+1;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CHUKY.INP", "r", stdin);
    freopen("CHUKY.OUT", "w", stdout);
    cin >> l >> r;
    for(int i = l; i<=r; ++i){
        int t = i;
        int cnt = 0;
        while(t!=1){
            if(hang[i]!=0){
                cnt += hang[t];
                break;
            }
            cnt++;
            t = tt(t);
        }
        if(t==1) cnt++;
        nn = min(nn, cnt);
        ln = max(ln, cnt);
        hang[i] = cnt;
    }
    cout << ln+nn;
    return 0;
}
