#include <bits/stdc++.h>
using namespace std;
long long n,q,t,kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> q;
    while(q--){
        cin >> n;
        kq = 1;
        for(int i = 2; i*i<=n; ++i){
            if(n%i==0){
                kq+=i;
                kq+=(n/i);
            }
        }
        if(n<kq) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}
