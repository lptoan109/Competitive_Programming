#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> a;
long long t,n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    while(cin>>t) a.push_back(t);
    n=a.size();
    if(n<3){
        cout << 0;
        return 0;
    }
    long long l[n], r[n], kq=0;
    l[0] = a[0];
    for(int i = 2; i<=n; ++i){
        l[i] = min(l[i-1], a[i]);
    }
    r[n] = a[n];
    for(int i = n-1; i>>1; --i){
        r[i] = max(r[i+1], a[i]);
    }
    for(int i = 1; i<=n; ++i){
        kq+=min(l[i], min (r[i], a[i]));
    }
    cout << kq;
    return 0;
}
