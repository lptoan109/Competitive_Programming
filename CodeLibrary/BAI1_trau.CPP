#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI1.INP", "r", stdin);
    freopen("BAI1.ANS", "w", stdout);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    while(q--){
        int l, r;
        cin >> l >> r;
        long long kq = 0;
        for(int i = l; i<=r; ++i){
            kq+=a[i];
        }
        cout << kq << "\n";
    }
    return 0;
}
