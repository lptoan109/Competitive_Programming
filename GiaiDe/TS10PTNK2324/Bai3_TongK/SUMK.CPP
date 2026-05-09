#include <bits/stdc++.h>
using namespace std;
const int MAXN = 800;
int n, a[MAXN+5], k;
long long ps[MAXN+5][MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUMK.INP", "r", stdin);
    freopen("SUMK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            ps[i][j] = a[i]*a[j];
        }
    }
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            ps[i][j]+=ps[i-1][j]+ps[i][j-1]-ps[i-1][j-1];
        }
    }
    cin >> k;
    for(int i =1 ; i<=n; ++i){
        for(int j = 1; j<=n; ++j){
            for(int h = 1; h<=i; ++h){
                for(int g = 1; g<=j; ++g){
                    if(ps[i][j]-ps[h-1][j]-ps[i][g-1]+ps[h-1][g-1]==k) kq++;
                }
            }
        }
    }
    cout << kq;
    return 0;
}
