#include <bits/stdc++.h>
using namespace std;
double a, b;
char type;
int main()
{
    cin >> a >> type >> b;
    if(type == '+') cout << fixed << setprecision(3) << round((a+b)*1000.0)/1000.0;
    if(type == '-') cout << fixed << setprecision(3) << round((a-b)*1000.0)/1000.0;
    if(type == '*') cout << fixed << setprecision(3) << round((a*b)*1000.0)/1000.0;
    if(type == '/'){
        if(b==0) cout << "ze";
        else cout << fixed << setprecision(3) << round((a/b)*1000.0)/1000.0;
    }
    return 0;
}
