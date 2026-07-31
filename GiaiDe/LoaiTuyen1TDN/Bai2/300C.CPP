#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int a, b , n;
long long kq;
long long pog(long long k){
    long long t = 1;
    for(long long i = 1; i<=k; ++i) t*=i;
    return t;
}
bool check(int k){
    while(k>0){
        int cs = k%10;
        if(cs!=a && cs!=b) return false;
        k/=10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("300C.INP", "r", stdin);
    freopen("300C.OUT", "w", stdout);
    cin >> a >> b >> n;
    int k = a*n;
    if(check(a*n)) kq++;
    if(check(b*n)) kq++;
    //cout << k << "\n";
    for(int i = 1; i<n; ++i){
        k-=a;
        k+=b;
        if(check(k)){
            //cout << 10010 << "\n";
            kq = (kq%mod+(pog(n)/(pog(i)*pog(n-i)))%mod)%mod;
        }
        //cout << k << "\n";
    }
    cout << kq;
    return 0;
}
