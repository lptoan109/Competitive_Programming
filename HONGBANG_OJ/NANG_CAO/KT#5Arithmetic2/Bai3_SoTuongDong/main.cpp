#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long l,r, kq;
map<long long, int> cnt;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SIMILAR.INP", "r", stdin);
    freopen("SIMILAR.OUT", "w", stdout);
    cin >> l >> r;
    vector <long long> a(r+5, 1);
    for(long long i = 2; i<=r; ++i){
        if(a[i]==1){
            for(long long j = i; j<=r; j+=i){
                a[j]*=i;
            }
        }
    }
    for(long long i = l; i<=r; ++i){
        cnt[a[i]]++;
    }
    for(auto &i:cnt){
        kq+=(i.second*(i.second-1))/2;
    }
    cout << kq;
    return 0;
}
