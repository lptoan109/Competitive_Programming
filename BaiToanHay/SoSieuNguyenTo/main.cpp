#include <bits/stdc++.h>
using namespace std;
bool snt(long long n){
    if(n<2) return false;
    if(n==2||n==3) return true;
    for(long long i = 2; i*i<=n; ++i){
        if(n%i==0) return false;
    }
    return true;
}

long long tachchuso(long long n){
    long long cs = 0;
    while(n>0){
        cs += n%10;
        n/=10;
    }
    return cs;
}
long long n;
int main()
{
    cin >> n;
    bool kt1, kt2;
    kt1 = kt2 = false;
    kt1 = snt(n);
    long long tcs = tachchuso(n);
    kt2 = snt(tcs);
    if(kt1&&kt2) cout << "YES";
    else cout << "NO";
    return 0;
}
