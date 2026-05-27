#include <bits/stdc++.h>
using namespace std;
int n, a, b;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> n;
    if(n>a || n>b){
        cout << 0;
        return 0;
    }
    int t1 = a/n, t2 = b/n;
    cout << t1*t2;
    return 0;
}
