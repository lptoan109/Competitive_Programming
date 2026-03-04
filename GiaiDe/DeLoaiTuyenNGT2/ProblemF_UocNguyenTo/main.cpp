#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e6;
int q, ps[9][MAXN+5], a[MAXN+5];
void prepare(){
    for(int i = 2; i*i<=MAXN; ++i){
        if(a[i]==0){
            for(int j = i; j<=MAXN; j+=i){
                a[j]++;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        ps[a[i]][i]++;
    }
    for(int i = 1; i<=7; ++i){
        for(int j = 1; j<=MAXN; ++j){
            ps[i][j] = ps[i][j]+ps[i][j-1];
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemF.INP", "r", stdin);
    freopen("ProblemF.OUT", "w", stdout);
    cin >> q;
    prepare();
//    for(int i = 0; i<=7; ++i){
//        for(int j = 1; j<=MAXN; ++j){
//            cout << ps[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
    while(q--){
        int a,b,k, kq = 0;
        cin >> a >> b >> k;
        for(int i = k; i<=7; ++i){
            kq+=(ps[i][b]-ps[i][a-1]);
        }
        cout << kq << "\n";
    }
    return 0;
}
