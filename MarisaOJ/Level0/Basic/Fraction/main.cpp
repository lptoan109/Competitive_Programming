#include <bits/stdc++.h>
using namespace std;
int a, b, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b;
    for(int i = 1; i<=min(a, b); ++i){
        if(a%i==0 && b%i==0) t = i;
    }
    cout << a/t << " " << b/t;
    return 0;
}
