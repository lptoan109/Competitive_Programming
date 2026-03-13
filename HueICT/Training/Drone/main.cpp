#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n,l, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n >> l;
    for(int i = 1; i<n; ++i){
        cin >> a[i];
    }
    sort(a,a+n);
    if(a[1]!=l){
        cout << l;
        return 0;
    }
    for(int i = 2; i<n; ++i){
        if(a[i]!=a[i-1]+1){
            cout << a[i-1]+1;
            return 0;
        }
    }
    return 0;
}
