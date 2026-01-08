#include <bits/stdc++.h>
using namespace std;
map <long long, long long>a;
void ptthuasont(long long p){
    if(p==1){
        a[1]++;
    }
    else{
        for(long long i = 2; i*i<=p; ++i){
            while(p%i==0){
                a[i]++;
                p/=i;
            }
        }
    }
    if(p>1) a[p]++;
}
long long n, p, kq = LONG_MAX;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("BACHS.INP", "r", stdin);
    freopen("BACHS.OUT", "w", stdout);
    cin >> n >> p;
    ptthuasont(p);
    for(auto i:a){
        long long x = 0;
        for(long long j = i.first; j<=n; j*=i.first){
            x+=(n/j);
        }
        long long t = x/i.second;
        kq = min(kq,t);
    }
    cout << kq;
    return 0;
}
