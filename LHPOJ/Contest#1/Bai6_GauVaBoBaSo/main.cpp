#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5e3;
int n, k, a[MAXN+5];
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NHAP.INP", "r", stdin);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    for(int i = 1; i<=n; ++i){
        int t = k-a[i];
        map<int, int> cnt;
        for(int j = i+1; j<=n; ++j){
            int target = t-a[j];
            if(cnt.find(target) != cnt.end()) kq++;
            cnt[a[j]]++;
        }
    }
    cout << kq;
    return 0;
}
