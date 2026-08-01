#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int a[MAXN+5][MAXN+5], n;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        a[x1][y1]++;
        a[x2+1][y1]--;
        a[x1][y2+1]--;
        a[x2+1][y2+1]++;

    }
    for(int i = 1; i<=MAXN; ++i){
        for(int j = 1; j<=MAXN; ++j){
            a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
            if(a[i][j]>0) kq++;
        }
    }
    cout << kq;
    return 0;
}
