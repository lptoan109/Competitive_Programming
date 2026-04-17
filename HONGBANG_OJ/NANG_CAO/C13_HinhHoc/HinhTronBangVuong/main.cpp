#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HTBV.INP", "r", stdin);
    freopen("HTBV.OUT", "w", stdout);
    int n;
    while(cin >> n){
        if(n==1){
            cout << 4 << " " << 0 << "\n";
            continue;
        }
        long long cat = (2*n-2)*4+4;
        cout << cat << " " << ((2*n)*(2*n))-cat-4 << "\n";
    }
    return 0;
}
