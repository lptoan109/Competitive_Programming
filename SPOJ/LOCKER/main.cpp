#include <bits/stdc++.h>
using namespace std;
const long long m = 1e9+7;
long long pow2(long long a, long long b){
    long long kq = 1;
    while(b!=0){
        if(b%2!=0) kq = (kq%m*a%m)%m;
        a = (a%m*a%m)%m;
        b/=2;
    }
    return kq;
}
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(n<4) cout << n;
        else if(n%3==0) cout << pow2(3LL, n/3);
        else if(n%3==1) cout << (pow2(3LL, (n-4)/3)%m *4LL%m)%m;
        else if(n%3==2) cout << (pow2(3LL, (n-2)/3)%m*2LL%m)%m;
        cout << "\n";
    }
    return 0;
}
