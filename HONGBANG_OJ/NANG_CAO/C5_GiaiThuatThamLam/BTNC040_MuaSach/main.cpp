#include <bits/stdc++.h>
using namespace std;
int const MAXN = 1e7;
long long n, s=0, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("BTNC040.INP", "r", stdin);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i = n-2; i>0; i-=3){
        a[i]=0;
    }
    for(int i=1; i<=n; ++i) s+=a[i];
    cout << s;
    return 0;
}
