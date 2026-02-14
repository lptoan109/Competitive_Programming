#include <bits/stdc++.h>
using namespace std;
long long n;
void sub1(){
    long long k = n+1;
    while(1){
        long long t = 1;
        for(long long i = 2; i*i<k; ++i){
            if(k%i!=0){
                continue;
            }
            if(k%i==0){
                t+=i;
                if(i!=k/i) t+=k/i;
            }
            if(t>k){
                cout << k;
                return;
            }
        }
        if(t>k){
            cout << k;
            return;
        }
        k++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ANUM.INP", "r", stdin);
    freopen("ANUM.OUT", "w", stdout);
    cin >> n;
    sub1();
    return 0;
}
