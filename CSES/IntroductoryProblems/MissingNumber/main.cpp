#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i<n; ++i) cin >> a[i];
    sort(a, a+n);
    for(int i = 1; i<=n; ++i){
        if(!binary_search(a, a+n, i)){
            cout << i;
            return 0;
        }
    }
    return 0;
}
