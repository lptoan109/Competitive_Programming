#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll m, n, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for(ll i = min(m, n); i<=m; ++i){
        if(i%n==0) k = i;
    }
    cout << k;
    return 0;
}
