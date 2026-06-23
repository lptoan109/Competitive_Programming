#include <bits/stdc++.h>
using namespace std;
int n, a[1005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n/2; ++i){
        if(a[i]!=a[n-i+1]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
