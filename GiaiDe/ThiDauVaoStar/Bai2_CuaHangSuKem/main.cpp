#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n, int ps[MAXN+5];
void sub1(){
    long long kq = 0;
    for(int i = 1; i<=n; ++i){
        for(int j = 1; j<=i; ++j){
            if((a[i]-a[j-1])%5) kq++;
        }
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; ++i){
        int t;
        cin >> t;
        ps[i] = ps[i-1]+t;
    }
    if(n<1000){
        sub1();
        return 0;
    }
    return 0;
}
