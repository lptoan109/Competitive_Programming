#include<bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n, a[MAXN+5], cnt[26];
long long kq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i){
        if(i>6){
            cnt[a[i-6]%23]++;
        }
        kq+=cnt[a[i]%23];
    }
    cout << kq;
    return 0;
}
