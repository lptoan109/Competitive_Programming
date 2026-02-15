#include <bits/stdc++.h>
using namespace std;
int q;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n];
        bool check67 = false;
        for(int i = 1; i<=n; ++i){
            cin >> a[i];
            if(a[i]==67) check67 = true;
        }
        if(check67) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
