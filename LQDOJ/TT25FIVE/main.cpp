#include <bits/stdc++.h>
using namespace std;
void so5(long long n){
    long long d=0;
    for(long long i = 16; i<=n; ++i){
        double so =  sqrt(sqrt(i));
        for(long long j = 2; j<=so; ++j){
            bool snt = true;
            for(long long k = 2; k*k<=j; ++k){
                if(j%k==0){
                    snt = false;
                    break;
                }
            }
            if(snt==true) d++;
        }
    }
    cout << d;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("FIVE.INP", "r", stdin);
    freopen("FIVE.OUT", "w", stdout);
    long long n;
    cin >> n;
    so5(n);
    return 0;
}
