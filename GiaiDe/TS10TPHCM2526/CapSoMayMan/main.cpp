#include <bits/stdc++.h>
using namespace std;
int l,r,p;
long long kq;
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("Bai2.inp", "r", stdin);
    freopen("Bai2.out", "w", stdout);
    cin >> l >> r >> p;
    for(int i = l; i<=r; ++i){
        int t = i%p;
        if(t==p) kq++;
        a.push_back(t);
    }
    int n = r-l+1;
    for(int i = 0; i<n; ++i){
        auto vtl = lower_bound(a.begin(), a.end(), p-a[i]), vtr = upper_bound(a.begin(), a.end(), p-a[i]);
        kq += distance(vtl,vtr) *2;
    }
    cout << kq;
    return 0;
}
