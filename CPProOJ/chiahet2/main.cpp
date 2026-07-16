#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        unsigned long long l, r, x;
        cin >> l >> r >> x;
        if(l == 0) cout << r/x - l/x << "\n";
        else cout << r/x - (l-1)/x <<"\n";
    }
    return 0;
}
