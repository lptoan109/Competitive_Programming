#include <bits/stdc++.h>
using namespace std;
long long sl(long long n, long long d){
    if(n==1) return d;
    if(n&2!=0){
        d++;
        n = n*3+1;
        return sl(n,d);
    }
    else{
        d++;
        n=n/2;
        return sl(n,d);
    }
}
long long n,d = 0;
int main()
{
    cin >> n;
    d = sl(n,d);
    cout << d;
    return 0;
}
