#include <bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;
long long lt(long long a, long long b, long long m){
    long long kq = 1;
    if(b==0) return 1LL;
    while(b>0){
        if(b%2==1) kq = (kq%m*a%m)%m;
        a = (a%m*a%m)%m;
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
        long long a,b;
        cin >> a >> b;
        cout << lt(a, b, 10LL) << "\n";
    }
    return 0;
}
