#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("LONGFN.INP", "r", stdin);
    freopen("LONGFN.OUT", "w", stdout);
    long long n, kq=0;
    cin >> n;
    if(n%2==0){
        for(long long i = 1; i<n; i+=2){
            kq-=i;
            kq+=i+1;
        }
    }
    else{
        for(long long i = 1; i<n; i+=2){
            kq-=i;
            kq+=i+1;
        }
        kq-=n;
    }
    cout << kq;
    return 0;
}
