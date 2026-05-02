#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n, b[105];
        bool check =- true;
        cin >> n;
        for(int i = 1; i<=n-2; ++i){
            cin >> b[i];
        }
        for(int i = 3; i<=n-2; ++i){
            if(b[i]==1 && b[i-1]==0 && b[i-2]==1){
                check = false;
                break;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
