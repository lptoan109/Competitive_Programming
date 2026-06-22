#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
long long n,q;
long long isprimes[MAXN+1];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("UNT.INP", "r", stdin);
    cin >> q;
    for(long long i = 2; i*i<=MAXN; ++i){
        if(isprimes[i]==0){
            for(long long j = i*i; j<=MAXN; j+=i){
                isprimes[j] = i;
            }
        }
    }
    for(long long i = 2; i<=MAXN; ++i){
        if(isprimes[i] == 0) isprimes[i] = i;
    }
    while(q--){
        cin >> n;
        set<long long> a;
        while(n>1){
            a.insert(isprimes[n]);
            n/=isprimes[n];
        }
        for(long long i:a){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
