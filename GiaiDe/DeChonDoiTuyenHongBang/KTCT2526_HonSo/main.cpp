#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c;
    cin >> a >> b >> c;
    long long th1 = (a*c+b)/c, th2 = (a*b+c)/b, (b*a+c)/a;
    long long maxx = max(th1,max(th2,th3));
    if(maxx = th1){
        cout << a << " " << b << " " << c;
    }
    else if(maxx = th2){
        cout << a << " " << b << " " << c;
    }
    return 0;
}
