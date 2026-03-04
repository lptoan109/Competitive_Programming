#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t;
ll a[5] = {1LL, 3LL, 6LL, 7LL};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll kq = 0;
        for(ll i = 3; i>=0; --i){
            if(i==0){
                while(n<=a[i]&&n>0){
                    kq++;
                    n-=a[i];
                }
            }
            else{
                while(n){
                    kq++;
                    n-=a[i];
                }
            }
        }
        if(n>=0) cout << kq << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}
