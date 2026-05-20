#include <bits/stdc++.h>
using namespace std;
long long suppow(long long a, long long b, int mod){
    long long ans = 1;
    while(b>0){
        if(b%2==1){
            ans = (ans*a)%mod;
        }
        a = (a*a)%mod;
        b/=2;
    }
    return ans;
}
long long n, k;
map<long long, int> cnt;
//vector<long long> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LUYTHUA.INP","r", stdin);
    freopen("LUYTHUA.OUT","w", stdout);
    cin >> n >> k;
    n%=100;
    while(cnt.find(n)==cnt.end()){
        cnt[n]++;
        //if(cnt.find(n)!=cnt.end()) break;
        n = suppow(n, k , 100);
        kq.push_back(n);
        cout << n << " ";
    }
//    int gh = kq.size();
//    for(int i = 0; i<gh; ++i){
//        cout << kq[i] << " ";
//    }
    return 0;
}
