#include <bits/stdc++.h>
using namespace std;
int a, b;
int main()
{
    cin >> a>> b;
    if(a==0 && b==0) cout << "INFINITE SOLUTIONS";
    else if(a==0 && b!=0 || b%a!=0){
        cout << "NO SOLUTION";
    }
    else{
        cout << (-1*b)/a;
    }
    return 0;
}
