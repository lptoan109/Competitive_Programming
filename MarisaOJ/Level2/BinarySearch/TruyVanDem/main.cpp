#include <bits/stdc++.h>
using namespace std;
long long n,l,r,q,x,t;
unordered_map <long long, vector<long long>> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("input.INP", "r",stdin);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        cin >> t;
        a[t].push_back(i);
    }
    for(int i = 1; i<=q; ++i){
        cin >> l >> r >> x;
        vector <long long> &av = a[x];
        auto ll = lower_bound(av.begin(), av.end(), l), rr = upper_bound(av.begin(), av.end(), r);
        cout << rr-ll << "\n";
    }
    return 0;
}
