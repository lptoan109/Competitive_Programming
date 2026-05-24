#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long ltnhiphanm(long long a, long long b){
    long long kq = 1;
    while(b>0){
        if(b%2!=0){
            kq=kq*a%mod;
        }
        a=a*a%mod;
        b/=2;
    }
    return kq;
}
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n--){
        long long a,b, c;
        cin >> a >> b >> c;
        cout << ltnhiphan(a%mod, ltnhiphan(b, c)) << "\n";
    }
    return 0;
}
