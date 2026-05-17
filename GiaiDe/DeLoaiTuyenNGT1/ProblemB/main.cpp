#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, a[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemB.INP", "r", stdin);
    freopen("ProblemB.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    for(int i= 1; i<=n; ++i){
        cout << sqrt(a[i][i]) << " ";
    }
    return 0;
}
