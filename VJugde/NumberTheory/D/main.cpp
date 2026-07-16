#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int cnt[10][MAXN+5], a[MAXN+5];
void pre(){
    for(int i = 2; i<=MAXN; ++i){
        if(a[i]==0){
            for(int j = i; j<=MAXN; j+=i){
                a[j]++;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        cnt[a[i]][i]++;
    }
    for(int i = 0; i<=7; ++i){
        for(int j = 1; j<=MAXN; ++j) cnt[i][j]+=cnt[i][j-1];
    }
}
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> q;
    while(q--){
        int a,b,k;
        cin >> a >> b >> k;
        cout << cnt[k][b] - cnt[k][a-1] << "\n";
    }
    return 0;
}
