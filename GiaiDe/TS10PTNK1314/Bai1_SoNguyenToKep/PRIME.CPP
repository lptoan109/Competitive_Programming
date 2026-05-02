#include <bits/stdc++.h>
using namespace std;
const int MAXN = 40000;
#define int long long
bool check(int k){
    if(k==2 || k==3) return true;
    if(k<2 || k%2==0 || k%3==0) return false;
    for(int i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0) return false;
    }
    return true;
}
int n, kq = -1;
bool snt[MAXN+5];
vector<int> a;
void sang(){
    snt[1] = snt[0] = true;
    int limit = sqrt(n);
    for(int i = 2; i*i<=limit; ++i){
        if(!snt[i]){
            for(int j = i*i; j<=limit; j+=i) snt[j] = true;
        }
    }
    for(int i = 2; i<=limit; ++i){
        if(!snt[i]) a.push_back(i);
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PRIME.INP", "r", stdin);
    freopen("PRIME.OUT", "w", stdout);
    cin >> n;
    sang();
    for(int i: a){
        if(i*i>n) break;
        int k = n/i;
        while(k>i){
            if(i*k<=kq) break;
            if(check(k)){
                kq = max(kq, i*k);
                break;
            }
            k--;
        }
    }
    cout << kq;
    return 0;
}
