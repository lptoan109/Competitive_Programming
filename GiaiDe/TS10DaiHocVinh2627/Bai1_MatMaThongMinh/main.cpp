#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b){
    while(b>0){
        a%=b;
        swap(a, b);
    }
    return a;
}
long long a, b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i =1 ; i<=3; ++i){
        long long t;
        cin >> t;
        a+=t;
    }
    for(int i =1 ; i<=3; ++i){
        long long t;
        cin >> t;
        b+=t;
    }
    cout << a/gcd(a, b)*b;
    return 0;
}
