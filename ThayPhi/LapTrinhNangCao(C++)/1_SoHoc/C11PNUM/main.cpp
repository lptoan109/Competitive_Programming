#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
bool check[MAXN+5];
vector<int> snt;
void pre(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=MAXN; ++i){
        if(!check[i]){
            for(int j = i*i; j<=MAXN; j+=i){
                check[j] = true;
            }
        }
    }
    for(int i = 1; i<=MAXN; ++i){
        if(!check[i]) snt.push_back(i);
    }
}
void solve(unsigned long long n, int k){
    int nt = snt.size();
    unsigned long long kq = 1;
    for(int i = 0; i<k; ++i){
        kq*=snt[i];
    }
    if(kq>n){
        cout << -1;
        return;
    }
    unsigned long long temp = kq;
    for(int i = k; i<nt; ++i){
        temp/=snt[i-k];
        temp*=snt[i];
        if(temp>n) break;
        kq = temp;
        temp = kq;
    }
    cout << kq;
    cout << "\n";
}
int t;
int main(){
    ios_base::sync_with_stdio(0);
    pre();
    cin >> t;
    while(t--){
        unsigned long long n;
        int k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
