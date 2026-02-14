#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int a[MAXN+5][MAXN+5], m,n,k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BOARD.INP", "r", stdin);
    freopen("BOARD.OUT", "w", stdout);
    cin >> m >> n >> k;
    while(k--){
        int x,y;
        cin >> x >> y;
        a[x][y]++;
    }
    return 0;
}
