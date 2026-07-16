#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5, MAXX = 1e6;
int n, a[MAXN+5], t, d[MAXX+5];
map<int, int> cnt;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        t = max(t, a[i]);
        cnt[a[i]]++;
    }
    for(int i = 1; i<=t; ++i){
        for(int j = i; j<=t; j+=i){
            d[j]++;
        }
    }
    return 0;
}
