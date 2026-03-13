#include <bits/stdc++.h>
using namespace std;
long long tu(long long k){
    long long kq = 0;
    for(long long i = 1; i*i<=k; ++i){
        if(k%i==0){
            kq+=i;
            if(k/i != i) kq+=k/i;
        }
    }
    return kq;
}
long long l,r;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ANALYSE.INP", "r", stdin);
    freopen("ANALYSE.OUT", "w", stdout);
    cin >> l >> r;
    long long kq = tu(l) + tu(r);
    cout << kq;
    return 0;
}
