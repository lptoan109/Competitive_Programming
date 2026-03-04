#include <bits/stdc++.h>
using namespace std;
#define int long long
int t;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c==0){
            cout << 0 << "\n";
            continue;
        }
        if(a==b){
            cout << 0 << "\n";
            continue;
        }
        if(c%2!=0){
            if(a>b) cout << 1 << "\n";
            else cout << -1 << "\n";
        }
        else{
            int newb = abs(b), newa = abs(a);
            if(newa>newb) cout << 1 << "\n";
            else if(newa == newb) cout << 0 << "\n";
            else cout << -1 << "\n";
        }
    }
    return 0;
}
