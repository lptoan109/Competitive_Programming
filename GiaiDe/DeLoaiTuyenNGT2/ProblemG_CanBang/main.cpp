#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5;
int n,k, a[MAXN+5], kq;
map<int, int> cnt;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemG.INP", "r", stdin);
    freopen("ProblemG.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i = 1; i<=n; ++i){
        if(cnt.count(a[i]+k)&&cnt.count(a[i]-k)){
            kq++;
        }
    }
    cout << kq;
    return 0;
}
