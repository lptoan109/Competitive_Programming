#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll kq[100000000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("SoTuMan.INP", "r", stdin);
    freopen("SoTuMan.OUT","w", stdout);
    ll n, t,d=0;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> t;
        ll s = 0, x = t;
        while(t>0){
            int cs = t%10;
            s+=cs*cs*cs;
            t/=10;
        }
        if(x==s) kq[d++] = x;
    }
    sort(kq,kq+d);
    for(int i = 0; i<d; ++i) cout << kq[i] << " ";
    return 0;
}
