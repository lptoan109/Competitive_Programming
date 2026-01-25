#include <bits/stdc++.h>
using namespace std;
int n;
vector <pair<int, int>> a(1005);
bool yes = false;
long long kq = -1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PHATSONG.INP", "r",stdin);
    freopen("PHATSONG.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int x;
        cin >> x;
        a[x] = make_pair(x,i);
    }
    for(auto &i:a){
        for(auto &j:a){
            if(i.second<=0 || j.second<=0) continue;
            if(gcd(i.first, j.first)==1){
                long long t = i.second+j.second;
                kq = max(t, kq);
                yes = true;
            }
        }
    }
    if(yes==false) cout << -1;
    else cout << kq;
    return 0;
}
