#include <bits/stdc++.h>
using namespace std;
long long a, b, kq;
int main()
{
    cin >> a >> b;
    int t = a+b;
    while(t>0){
        kq=kq*10+t%10;
        t/=10;
    }
    cout << kq;
    return 0;
}
