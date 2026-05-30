#include <bits/stdc++.h>
using namespace std;
bool check(long long so){
    if(so==2 || so==3) return true;
    if(so<2 || so%2==0 || so%3==0){
        return false;
    }
    for(long long i = 5; i*i<=so; i+=6){
        if(so%i==0 || so%(i+2)==0) return false;
    }
    return true;
}
long long a, b, c;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c;
    if(check(a)) cout << "A\n";
    else cout << "B\n";
    if(check(b)) cout << "A\n";
    else cout << "B\n";
    if(check(c)) cout << "A\n";
    else cout << "B\n";
    return 0;
}
