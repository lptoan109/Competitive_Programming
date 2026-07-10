#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5, MAXX = 5e6;
int unt[MAXX+5];
void pre(){
    for(int i = 1; i<=MAXX; ++i) unt[i] = i;
    for(int i=2; i*i<=MAXX; ++i){
        if(unt[i] == i){
            for(int j = i*i; j<=MAXX; j+=i){
                if(unt[j] == j) unt[j] = i;
            }
        }
    }
}
map<int, int> cnt;
int n, a[MAXN+5], t,kq = 1e9;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pre();
    cin >> n;
    cin >> t;
    a[1] = t;
    kq = n;
    for(int i = 2; i<=n; ++i){
        cin >> a[i];
        t = __gcd(t, a[i]);
    }
    for(int i = 1; i<=n; ++i){
        int temp;
        temp = a[i]/t;
        cnt[unt[temp]]++;
    }
    for(auto &i:cnt){
        kq = min(kq,n-i.second);
    }
    if(kq==0) cout << -1;
    else cout << kq;
    return 0;
}
