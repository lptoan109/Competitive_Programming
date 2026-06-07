#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    cin >> n >> m >> k;
    for(int i = 1; i<=n; ++i){
        string s;
        cin >> s;
        for(int j = 1; j<=k; ++j){
            for(int q = 0; q<m; ++q){
                for(int w = 1; w<=k; ++w){
                    cout << s[q];
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
