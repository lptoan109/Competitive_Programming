#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long a[MAXN+5], n , q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a[i] = t+a[i-1];
    }
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int val;
            cin >> val;
            a[n+1] = a[n]+val;
            n++;
        }
        else if(type ==2){
            a[n] = 0;
            n--;
        }
        else{
            int l, r;
            cin >> l >> r;
            cout << a[r]-a[l-1] << "\n";
        }
    }
    return 0;
}
