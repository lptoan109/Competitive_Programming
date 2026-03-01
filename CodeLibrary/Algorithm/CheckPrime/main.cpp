#include <bits/stdc++.h>
using namespace std;

//{
bool check6k(long long k){
    if(k==2 || k==3) return true;
    if(k<2 || k%2==0 || k%3==0) return false;
    for(long long i = 5; i*i<=k; i+=6){
        if(k%i==0 || k%(i+2)==0)
    }
    return false;
}
//} Độ phức tạp: O(sqrt(n)/3)

//{
const int MAXN = 1e7;
bool notisprime[MAXN+5];
void sangEratosthenes(int a, int b){
    notisprime[0] = notisprime[1] = true;
    for(int i = a; i*i<=b; ++i){
        if(!notisprime[i]){
            for(int j = i*i; j<=b; ++j){
                notisprime[j] = true;
            }
        }
    }
    for(int i=1; i<=b; ++i){
        if(!notisprime[i]) cout << i << " ";
    }
}
//} Độ phức tạp: O(max(a,b)*log(max(a,b))
