#include <bits/stdc++.h>
using namespace std;
void sangphandoan(long long l, long long r){
    long long limit = sqrt(r);
    vector<bool> sntnho(limit+1, true);
    sntnho[0] = sntnho[1] = false;
    for(long long i = 2; i*i<=limit; ++i){
        if(sntnho[i]){
            for(long long j = i*i; j<=limit; j+=i){
                sntnho[j] = false;
            }
        }
    }
    vector <long long> snt;
    for(long long i = 2; i<=limit; ++i){
        if(sntnho[i]) snt.push_back(i);
    }
    long long n = r-l+1;
    vector <bool> snttinhtien(n, true);
    for(long long i:snt){
        long long start = (l+i-1)/i*i;
        if(start < i*i) start = i*i;
        for(long long j = start; j<=r; j+=i){
            snttinhtien[j-l] = false;
        }
    }
    if(l==1) snt[0] = false;
    long long kq = 0;
    for(long long i = 0; i<n; ++i){
        if(snttinhtien[i] && i+l>1){
            cout << i+l << " ";
            kq++;
        }
    }
    cout << "\n" << kq;
}
long long l,r;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SPD.INP", "r", stdin);
    freopen("SPD.OUT", "w", stdout);
    cin >> l >> r;
    sangphandoan(l,r);
}
