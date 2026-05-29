#include <bits/stdc++.h>
using namespace std;
const int epl = 1e9;
int gcd(int a, int b){
    while(b>0){
        a%=b;
        swap(a, b);
    }
    return a;
}
int a,b,c,d;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a>> b >> c >> d;
    int a1 = a/gcd(a, b), b1 = b/gcd(a, b), c1 = c/gcd(c, d), d1 = d/gcd(c, d);
    double t1 = a1/b1, t2 = c1/d1;
    if(t1>t2){
        cout << a << "/" << b << "\n";
    }
    else if(abs(t1-t2)<=epl){
        cout << 0 << "\n";
    }
    else{
        cout << c << "/" << d << "\n";
    }

    return 0;
}
