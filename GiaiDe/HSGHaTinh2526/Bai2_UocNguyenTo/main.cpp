#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+5], ps[8][MAXN+5];
void uoc(){
    for(int i = 2; i<=MAXN; ++i){
        if(a[i]==0){
            for(int j = i; j<=MAXN; j+=i){
                a[j]++;
            }
        }
    }
    for(int i = 0; i<=7; ++i){
        for(int j = 1; j<=MAXN; ++j){
            ps[i][j] = ps[i][j-1] + (a[j]==i?1:0);
        }
    }
}
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI2.INP", "r", stdin);
    freopen("BAI2.OUT", "w", stdout);
    cin >> q;
    uoc();
    while(q--){
        int A,b,k;
        cin >> A >> b >> k;
        long long kq = 0;
        for(int i = k; i<=7; ++i) kq += (ps[i][b] - ps[i][A-1]);
        cout << kq << "\n";
    }
    return 0;
}
