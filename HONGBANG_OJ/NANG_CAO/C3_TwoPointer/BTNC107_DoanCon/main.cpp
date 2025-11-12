#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e7;
ll n,k, s,ln, ct2, a[MAXN+5];
int main()
{
    cin >> n >> k;
    for(int i = 0; i<n; ++i) cin >> a[i];
    for(int i = 0; i<k; ++i) s +=a[i];
    ln = s;
    for(int i = 0; i<n; ++i){
        ct2=k+i;
        if(ct2>=n) break;
        s = s-a[i]+a[ct2];
        if(s>ln) ln = s;
    }
    cout << ln;
    return 0;
}
