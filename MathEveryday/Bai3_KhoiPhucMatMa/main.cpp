#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100;
const long long mod = 1e9+7;
vector<bool> mangsnt(int limit){
    vector <bool> a(limit, true);
    for(int i = 2; i*i<=limit; ++i){
        if(a[i]){
            for(int j = i*i; j<=limit; j+=i){
                a[j] = false;
            }
        }
    }
    return a;
}
map<int,int> sl;
void pttsnt(int n){
    for(int i = 2; i*i<=n; ++i){
        while(n%i==0){
            sl[i]++;
            n/=i;
        }
    }
    if(n>1) sl[n]++;
}
int m, limit = INT_MIN, b[MAXN + 5];
long long kq = 1;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BAI3.INP", "r", stdin);
    cin >> m;
    for(int i = 1; i<=m; ++i){
        cin >> b[i];
        limit = max(limit, b[i]);
    }
    vector <bool> snt = mangsnt(limit);
    for(int i = 1; i<=m; ++i){
        if(snt[b[i]]){
            sl[b[i]]++;
        }
        else{
            pttsnt(b[i]);
        }
    }
    for(auto &i:sl){
        kq = ((kq%mod)*((i.second%mod)+1))%mod;
    }
    cout << kq;
    return 0;
}
