#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], ln = 0, nn = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MOVE.INP", "r", stdin);
    freopen("MOVE.OUT", "w", stdout);
    cin >> n;
    string s;
    cin >> s;
    int t = 1;
    for(char i:s){
        if(i=='+'){
            a[t] = a[t-1]+1;
            ln = max(ln, a[t]);
        }
        else{
            a[t] = a[t-1]-1;
            nn = min(nn, a[t]);
        }
        t++;
    }
    cout << ln-nn;
    return 0;
}
