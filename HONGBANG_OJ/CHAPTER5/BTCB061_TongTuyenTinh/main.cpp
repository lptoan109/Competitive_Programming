#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,n;
    cin >> n;
    for(x=1;x<=n/3;++x){
        long long k = n-3*x;
        if(k%5==0){
            y = k/5;
            cout << n << " = " << "(" << x << " * 3) + (" << y << " * 5)";
            break;
        }
    }
    return 0;
}
