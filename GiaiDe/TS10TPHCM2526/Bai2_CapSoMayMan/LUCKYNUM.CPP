#include <bits/stdc++.h>
using namespace std;
long long dem(long long so, long long p){
    long long kq = so/10;
    if(so%10>0 || p>0) kq++;
    return kq;
}
long long l, r, p;
void sub1(){
    long long kq = 0;
    for(long long i = l; i<=r; ++i){
        for(long long j = l; j<=r; ++j){
            if((i*j)%10==p) kq++;
        }
    }
    cout << kq;
}
void sub2(){
    long long kq = 0;
    long long t1 = (r/5 - (l-1)/5) - (r/10 - (l-1)/10);
    kq = 2*(t1*((r-l+1)-(r/2 - (l-1)/2) - t1));
    //cout << t1 << " " << ((r-l+1)-(r/2 - (l-1)/2) - t1) << " " <<  kq << "\n";
    kq+=(t1*t1);
    cout << kq;
}
long long d[15];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LUCKYNUM.INP", "r", stdin);
    freopen("LUCKYNUM.OUT", "w", stdout);
    cin >> l >> r >> p;
    if(r<=1000){
        sub1();
        return 0;
    }
    if(p==5){
        sub2();
        return 0;
    }
    for(int i = 0; i<10; ++i){
        d[i] = dem(r, i) - dem(l-1, i);
    }
    long long kq = 0;
    for(int i = 0; i<10; ++i){
        for(int j = 0; j<10; ++j){
            if((i*j)%10 == p) kq+=d[i]*d[j];
        }
    }
    cout << kq;
    return 0;
}
