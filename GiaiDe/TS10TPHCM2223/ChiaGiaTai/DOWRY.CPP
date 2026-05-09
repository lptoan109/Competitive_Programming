#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
#define ll long long
bool check;
ll n,m, a[MAXN+5][MAXN+5];
int kqd, kqn;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DOWRY.INP", "r", stdin);
    freopen("DOWRY.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            ll t;
            cin >> t;
            a[i][j] = a[i-1][j]+a[i][j-1]-a[i-1][j-1]+t;
        }
    }
    for(int i = 1; i<=n; ++i){
        ll s1 = a[i][m];
        for(int j = 1; j<=m; ++j){
            ll s2 = a[n][j] - a[i][j], s3 = a[n][m] - s1 - s2;
            if(s1==s2 && s2==s3){
                check = true;
                kqn = i;
                kqd = j;
                break;
            }
        }
    }
    if(check){
        cout << "YES\n" << "N " << kqn << "\n" << "D " << kqd;
        return 0;
    }
    else{
        cout << "NO";
    }
    return 0;
}
