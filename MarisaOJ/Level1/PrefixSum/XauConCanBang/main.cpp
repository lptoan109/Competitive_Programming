#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define ll long long
ll a[MAXN+5], n, d = 0;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    ll s1 = 0, s0 = 0;
    for(ll i = 0; i<n; ++i){
        cin >> a[i];
        if(a[i]==0) s0 +=1;
        if(a[i]==1) s1+=1;
        if(s0==s1) d++;
    }
    cout << d;
    return 0;
}
