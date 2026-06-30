#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x%y==0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
