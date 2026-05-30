#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(b>0){
        a%=b;
        swap(a, b);
    }
    return a;
}
int n;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<n; ++i){
        if(gcd(n, i)==1) kq+=i;
    }
    cout << kq;
    return 0;
}
