#include <bits/stdc++.h>
using namespace std;
long long uoc(long long k){
    long long kq = 0;
    for(long long i = 1; i*i<=k; ++i){
        if(k%i==0){
            kq+=i;
            if(i!=k/i) kq+=(k/i);
        }
    }
    return kq;
}
long long a,b,c;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TONGUOC.INP", "r", stdin);
    freopen("TONGUOC.OUT", "w", stdout);
    cin >> a >> b >> c;
    cout << max(uoc(a), max(uoc(b), uoc(c)));
    return 0;
}
