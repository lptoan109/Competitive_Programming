#include <bits/stdc++.h>
using namespace std;
long long pow(long long a, long long b, long long m){
    long long kq = 1;
    a%=m;
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
        long long a, b;
        cin >> a >> b;
        cout << pow(a, b, 10) << "\n";
    }
    return 0;
}
