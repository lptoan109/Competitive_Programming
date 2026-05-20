#include <bits/stdc++.h>
using namespace std;
int sd[100] = {4, 2, 2, 2, 3, 2, 3, 2, 4, 3}, sn[100] = {2, 0, 3, 3, 1, 3, 3, 1, 3, 3};
int d, n;
bool check(int g, int p){
    int tgd = 0, tgn = 0;
    //cout << g << ", "<< p << " : ";
    if(p<10){
        tgd+=sd[0];
        tgn+=sn[0];
    }
    if(g==0){
        tgd+=sd[0];
        tgn+=sn[0];
    }
    else{
        while(g>0){
            tgd+=(sd[g%10]);
            tgn+=(sn[g%10]);
            g/=10;
        }
    }
    if(p==0){
        tgd+=sd[0];
        tgn+=sn[0];
    }
    else{
        while(p>0){
            tgd+=(sd[p%10]);
            tgn+=(sn[p%10]);
            p/=10;
        }
    }
    //cout << tgd << " " << tgn << "\n";
    return tgd==d && tgn==n;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("THOIGIAN.INP", "r", stdin);
    freopen("THOIGIAN.OUT", "w", stdout);
    cin >> d >> n;
    for(int i = 0; i<24; ++i){
        for(int j = 0; j<60; ++j){
            if(check(i, j)){
                cout << i << ":";
                if(j<10) cout << 0 << j;
                else cout << j;
                return 0;
            }
        }
    }
    return 0;
}
