#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define ll long long
ll n, a[MAXN+5], dp[MAXN+5], s, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> a[i];
        s+=a[i];
    }
    if(s%2==0){
        cout << s;
        return 0;
    }
    cout << 0;
    return 0;
}
