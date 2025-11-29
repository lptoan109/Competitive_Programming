#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
long long a[MAXN+5],n, kq, ln=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    sort(a,a+n, greater<long long>());
    for(int i = 0; i<n; ++i){
        kq=i+a[i]+1;
        if(kq>ln) ln = kq;
    }
    cout << ln;
    return 0;
}
