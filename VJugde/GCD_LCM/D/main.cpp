#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k = n;
        for(int i = 2; i*i<=n; ++i){
            if(n%i==0){
                k = n/i;
                break;
            }
        }
        cout << k <<  " " << n-k << "\n";
    }
    return 0;
}
