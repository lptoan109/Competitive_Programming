#include <bits/stdc++.h>
using namespace std;
bool ktsnt6k(long long n){
    if(n==2||n==3) return true;
    if(n<2||n%2==0||n%3==0) return false;
    for(long long i = 5; i*i<=n; i+=6){
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
void snt6k(long long m, long long n){
    for(long long i = m+1; i<n; ++i){
        if(ktsnt6k(i)) cout << i << " ";
    }
}
void sangthuong(long long m, long long n){
    vector <long long> snt(n, true);
    snt[0] = snt[1] = false;
    for(long long i = 2; i*i<=n; ++i){
        if(snt[i]){
            for(long long j = i*i; j<=n; j+=i){
                snt[j] = false;
            }
        }
    }
    for(long long i = m+1; i<n; ++i){
        if(snt[i]) cout << i << " ";
    }

}
long long m,n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> m >> n;
    if(n<1000000){
        snt6k(m,n);
    }
    else if(n<100000000) sangthuong(m,n);
    else ;
    return 0;
}
