#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
const int MAXN = 1e6;
long long fact[MAXN+5],invfact[MAXN+5];
long long lpower(long long a, long long b){
    long long res = 1;
    a%=mod;
    while(b > 0){
        if(b%2==1) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}
void precompute(int n){
    fact[0] = 1;
    for(int i = 1; i<=n; ++i){
        fact[i] = (fact[i-1]*i)%mod;
    }
    invfact[n] = lpower(fact[n], mod-2);
    for(int i = n-1; i>=0; --i){
        invfact[i] = (invfact[i+1]*(i+1))%mod;
    }
}
long long tohop(int n, int k){
    if(k<0||k>n) return 0;
    return (((fact[n]*invfact[k])%mod)*invfact[n-k])%mod;
}
int n,k,a[MAXN+5];
long long kq = 0;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ROBOTEAM.INP", "r", stdin);
    freopen("ROBOTEAM.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1,a+n+1);
    precompute(n);
    for(int i = k-1; i<=n; ++i){
        long long t1 = tohop(i-1,k-1);
        long long t2 = (a[i]*t1)%mod;
        kq = (t2+kq)%mod;
    }
    cout << kq;
    return 0;
}
