#include <bits/stdc++.h>
using namespace std;
long long dn(long long k, long long kq){
    map<long long, long long>a;
    for(long long i=1; i*i<=k; ++i){
        if(k%i==0){
            if(k/i!=i){
                a[i]++;
                a[k/i]++;
            }
            else a[i];
        }
    }
    long long i = 1;
    while(a.count(i)){
        i++;
    }
    if(i==2){
        kq++;
        return kq;
    }
    else{
        kq++;
        return dn(i,kq);
    }
}
long long a,b, t = 0, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PHEPNEN.INP", "r", stdin);
    freopen("PHEPNEN.OUT", "w", stdout);
    cin >> a >> b;
    for(long long i = a; i<=b; ++i){
        t+=dn(i,kq);
    }
    cout << t;
    return 0;
}
