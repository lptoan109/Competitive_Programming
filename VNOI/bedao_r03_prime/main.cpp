#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int cnt[10][MAXN+5], a[MAXN+5];
void pre(){
    for(int i = 2; i<=MAXN; ++i){
        if(a[i]==0){
            for(int j = i; j<=MAXN; j+=i) a[j]++;
        }
    }
    for(int i = 2; i<=MAXN; ++i){
        if(a[i]>0) cnt[a[i]][i]++;
    }
    for(int i = 1; i<=7; ++i){
        for(int j = 1; j<=MAXN; ++j){
            cnt[i][j]+=cnt[i][j-1];
        }
    }
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> t;
    while(t--){
        int l,r,k;
        cin >> l >> r >> k;
        cout << cnt[k][r] - cnt[k][l-1] << "\n";
    }
    return 0;
}
