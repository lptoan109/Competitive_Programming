#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN =1e6;
ll s, n, m, cnt, kq, check[10000005];
pair<ll, ll> a[MAXN+5], b[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SPEED.INP", "r", stdin);
    freopen("SPEED.OUT", "w", stdout);
    cin >> s >> n >> m;
    for(int i = 1; i<=n; ++i){
        ll t1, t2;
        cin >> t1 >> t2;
        a[i] = {t1, t2};
    }
    for(int i = 1; i<=m; ++i){
        ll t1, t2;
        cin >> t1 >> t2;
        b[i] = {t1, t2};
    }
    for(int i = 1; i<=n; ++i){
        a[i].first +=a[i-1].first;
    }
    for(int i = 1; i<=m; ++i){
        b[i].first +=b[i-1].first;
    }
    int cur = 1;
    for(int i = 1; i<=n; ++i){
        for(; cur<=a[i].first; ++cur){
            check[cur] = a[i].second;
        }
    }
    cur = 1;
    long long t = -1;
    for(int i = 1; i<=m; ++i){
        for(; cur<=b[i].first; ++cur){
            if(b[i].second>check[cur]){
                if(b[i].second!=t){
                    t = b[i].second;
                    cnt++;
                }
                kq = max(kq, abs(b[i].second-check[cur]));
            }
        }
    }
    if(cnt==0){
        cout << 0;
        return 0;
    }
    cout << cnt << " " << kq;
    return 0;
}
