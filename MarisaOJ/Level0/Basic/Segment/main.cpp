#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int main()
{
    cin >> a >> b >> c >> d;
    int bd1 = min(a, b), kt1 = max(a, b), bd2 = min(c, d), kt2 = max(c, d);
    if(bd1<bd2){
        if(kt1>=bd2) cout << "YES";
        else cout << "NO";
    }
    else if(bd1>bd2){
        if(kt2>=bd1) cout << "YES";
        else cout << "NO";
    }
    else cout << "YES";
    return 0;
}
