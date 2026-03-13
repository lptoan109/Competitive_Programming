#include <bits/stdc++.h>
using namespace std;
bool check(long long k){
    long long cb2 = sqrt(k);
    return cb2*cb2==k;
}
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NSQUARE.INP", "r", stdin);
    freopen("NSQUARE.OUT", "w", stdout);
    cin >> n;
    if(check(n)){
        cout << 1;
        return 0;
    }
    long long t = n*2;
    while(1){
        if(check(t)){
            cout << t/n;
            return 0;
        }
        t+=n;
    }
    return 0;
}
