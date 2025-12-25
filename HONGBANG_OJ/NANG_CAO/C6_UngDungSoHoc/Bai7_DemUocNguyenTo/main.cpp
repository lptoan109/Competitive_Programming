#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int a[MAXN+1];
void demuocntbangsang(long long n){
    vector<bool> kt(n+1, true);
    for(long long i = 2; i<=n; ++i){
        if(kt[i]){
            for(long long j = 2*i; j<=n; j+=i){
                kt[j] = false;
                a[j]++;
            }
        }
    }
    for(long long i = 2; i<=n; ++i){
        if(!kt[i]) cout << a[i] << " ";
    }
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("UNT.INP", "r", stdin);
    freopen("UNT.OUT", "w", stdout);
    cin >> n;
    demuocntbangsang(n);
    return 0;
}
