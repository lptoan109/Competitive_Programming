#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5;
long long n,d, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
        ln = max(a[i], ln);
    }
    if(d<ln){
        cout << -1;
        return 0;
    }
    return 0;
}
