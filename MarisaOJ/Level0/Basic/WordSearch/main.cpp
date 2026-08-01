#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50;
char a[MAXN+5][MAXN+5];
string s;
int n, m;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            cin >> a[i][j];
        }
    }
    cin >> s;
    for(int i =1 ; i<=m; ++i){
        for(int j = 1; j<=n; ++j){
            string t = "";
            for(int k = j; k<=n; ++k){
                t+=a[k][i];
                if(t==s){
                    cout << "YES";
                    return 0;
                }
            }
        }
        for(int j = n; j>=1; --j){
            string t = "";
            for(int k = j; k>=1; --k){
                t+=a[k][i];
                if(t==s){
                    cout << "YES";
                    return 0;
                }
            }
        }
        //cout << t << "\n";
    }
    for(int i =1 ; i<=n; ++i){
        for(int j = 1; j<=m; ++j){
            string t = "";
            for(int k = j; k<=m; ++k){
                t+=a[i][k];
                if(t==s){
                    cout << "YES";
                    return 0;
                }
            }
        }
        for(int j = m; j>=1; --j){
            string t = "";
            for(int k = j; k>=1; --k){
                t+=a[i][k];
                if(t==s){
                    cout << "YES";
                    return 0;
                }
            }
        }
        //cout << t << "\n";
    }
    cout << "NO";
    return 0;
}
