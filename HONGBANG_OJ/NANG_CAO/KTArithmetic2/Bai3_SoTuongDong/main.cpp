#include <bits/stdc++.h>
using namespace std;

set<int> tsnt(int n){
    set<int>st;
    for(int i = 2; i * i <= n; ++i){
        if(n%i==0){
            st.insert(i);
            while(n%i==0) n/=i;
        }
    }
    if(n>1) st.insert(n);
    return st;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SIMILAR.INP", "r", stdin);
    freopen("SIMILAR.OUT", "w", stdout);
    int l, r;
    cin >> l >> r;
    int ans = 0;
    for(int a = l; a<r; ++a) {
        if(a<2) continue;
        set<int> s1 = tsnt(a);
        for(int b = a + 1; b <= r; ++b) {
            if(s1==tsnt(b)) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}
