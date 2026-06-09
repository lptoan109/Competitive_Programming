#include<bits/stdc++.h>
using namespace std;
int t;
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        double n, x, y, z;
        cin >> n >> x >> y >> z;

        cout << min(ceil(z+(n-z*x)/(x+10*y)), ceil(n/(x+y))) << "\n";
    }
    return 0;
}
