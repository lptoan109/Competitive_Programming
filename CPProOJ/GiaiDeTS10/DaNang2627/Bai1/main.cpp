#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6, MAXX = 1e7;
int n, pf[MAXN+5], q;
bool snt[MAXX+5];
bool check(int k){
    //cout << k << " : ";
    bool ok = false;
    for(int i = 0; i<10; ++i){
        if(!snt[k*10+i]) ok = true;;
        //cout << k*10+i << " ";
    }
    if(!ok) return false;
    while(k>0){
        //cout << k << " ";
        if(snt[k]) return false;
        k/=10;
    }
    //cout << "\n";
    return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("prime.inp", "r", stdin);
    freopen("prime.out", "w", stdout);
    cin >> n;
    snt[0] = snt[1] = true;
    for(int i = 2; i*i<=MAXX; ++i){
        if(!snt[i]){
            for(int j = i*i; j<=MAXX; j+=i) snt[j] = true;
        }
    }
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        if(!snt[t] && check(t)){
            pf[i]++;
        }
        pf[i]+=pf[i-1];
    }
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pf[r]-pf[l-1] << "\n";
    }
    return 0;
}
