#include <bits/stdc++.h>
using namespace std;
const int MAXN = 3e5;
long long m,n,a[MAXN+5];
void sub1(){
    for(int i = 1; i<=n; ++i) cin >> a[i];
    long long kq = 0;
    for(int i = 1; i<=n; ++i){
        for(int j = i+1; j<=n; ++j){
            if((a[i]+a[j])%m==0) kq++;
        }
    }
    cout << kq;
}
void sub2(){
    map<long long, long long> cnt;
    long long kq = 0;
    for(int i = 1; i<=n; ++i){
        long long x;
        cin >> x;
        long long t = (x%m+m)%m;
        long long target = (m-t)%m;
        kq+=cnt[target];
        cnt[t]++;
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n >> m;
    if(n<=5000) sub1();
    else sub2();
    return 0;
}
