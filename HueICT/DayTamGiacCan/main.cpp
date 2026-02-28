#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n;
    if(n%2==0){
        cout << "no";
        return 0;
    }
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    if(a[0]!=1 || a[n-1]!=1){
        cout << "no";
        return 0;
    }
    for(int i = 0; i<=n/2; ++i){
        if(a[i]!=a[n-i-1]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}
