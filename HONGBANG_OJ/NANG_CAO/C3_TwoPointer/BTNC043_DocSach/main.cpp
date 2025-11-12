#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e8;
ll n, t, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);
    cin >> n >> t;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    ll l=1, sum=0, ln = 0, d;
    for(int r = 1; r<=n; ++r){
        sum +=a[r];
        if(sum<=t){
            d = r-l+1;
            if(d>ln) ln = d;
            continue;
        }
        else{
            sum -= a[l];
            l++;
        }
    }
    cout << ln;
    return 0;
}
