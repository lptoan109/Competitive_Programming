#include <bits/stdc++.h>
using namespace std;
const int MAXN = 15;
int checkc[MAXN+5], checkmatrix[MANX+5][MAXN+5];
int n, sl;
bool check(int posi, int posj){
    if(posi < n&&posj < n){
        for(int i = posi; i<=n; ++i){
            for(int j = posj; j<=n; ++j){
                if(checkmatrix){
                    return false;
                }
            }
        }
    }
    if(posi>1&&posj>1){
        for(int i = pos; i>=1; i--){
            for(int j = posj; j>=1; j--){
                if(checkmatrix){
                    return false;
                }
            }
        }
    }
    return true;
}
void xephau(int i, int j){
    if(j>n) xephau(i-1, 1);
    for(int u = i; u<=n; ++u){
        for(int v = j; v<=n; ++v){
            checkmatrix[u][v] = true;
            checkc[u] = true;
            if(check(u, v) == false || checkc = true){
                checkmatrix[u][v] = false;
                checkc[u] = false;
                xephau(u,v+1);
            }
            sl++;

            if(sl>=n){
                cout <<
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ08.INP", "r", stdin);
    freopen("DQ08.OUT", "w", stdout);
    return 0;
}
