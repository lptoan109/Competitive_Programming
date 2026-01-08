#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;

void sub1(long long n, long long k){
    long long ps[n+1], kq;
    ps[0] = kq = 0;
    for(long long i = 1; i<=n; ++i){
        long long tam;
        cin >> tam;
        ps[i] = ps[i-1]+tam;
    }
    for(long long i = 0; i<n; ++i){
        for(long long j = i; j<n; ++j){
            if(ps[j]-ps[i]==k) kq++;
        }
    }
    cout << kq;
}

void sub2(long long n, long long k){
    long long t, kq;
    unordered_map<long long, long long>a;
    a[0] = 1;
    kq = t = 0;
    for(long long i = 1; i<=n; ++i){
        long long tam;
        cin >> tam;
        t+=tam;
        if(a.count(t-k)) kq+=a[t-k];
        a[t]++;
    }
    cout << kq;
}
long long n,k;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("CHITIEU.INP", "r", stdin);
    freopen("CHITIEU.OUT", "w", stdout);
    cin >> n >> k;
    //if(n<=10000) sub1(n,k);
    //else sub2(n,k);
    //sub1(n,k);
    sub2(n,k);
}
