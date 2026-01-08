#include <bits/stdc++.h>
using namespace std;
bool perfectnum(long long k){
    long long t=0;
    for(long long i = 1; i*i<=k; ++i){
        if(k%i==0){
            if(i!=k/i){
                t+=i+k/i;
            }
            else{
                t+=i;
            }
        }
    }
    t-=k;
    return t==k;
}
bool snt(long long k){
    if(k==2||k==3) return true;
    if(k<2||k%2==0||k%3==0) return false;
    for(long long i = 5; i*i<=k; i+=6){
        if(k%i==0||k%(i+2)==0) return false;
    }
    return true;
}
long long Pow(long long a, long long b) {
    long long ans = 1;
    while (b > 0){
        if (b % 2) ans = ans * a;
        a = a * a;
        b /= 2;
    }
    return ans;
}
unsigned long long n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SHH.INP", "r", stdin);
    freopen("SHH.OUT", "w", stdout);
    cin >> n;
    for(long long i = 2; i<=31; ++i){
        if(snt(i)){
            long long t = Pow(2,i);
            t--;
            if(!snt(t)) continue;
            if(snt(t)){
                kq = Pow(2,i-1)*t;
                if(kq>n) break;
                cout << kq << "\n";
            }
        }
    }
    return 0;
}
