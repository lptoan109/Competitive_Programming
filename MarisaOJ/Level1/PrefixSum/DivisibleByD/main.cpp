#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n;
long long pf[MAXN+5], kq, d;
unordered_map<long long, int> cnt;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> d;
    for(int i = 1; i<=n; ++i){
        cin >> pf[i];
        pf[i]+=pf[i-1];
    }
    for(int i = 1; i<=n; ++i){
        cnt[(pf[i-1]%d+d)%d]++;
        kq+=cnt[(pf[i]%d+d)%d];
    }
    cout << kq;
    return 0;
}
