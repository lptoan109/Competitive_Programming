#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    if(n==1||n==0){
        cout << 0;
        return 0;
    }
    if(n>1){
        kq = n*n - n - 1;
    }
    if(n<0){
        kq = ((n*n-1))/n*n-n-1;
    }
    cout << setprecision(2) << kq;
    return 0;
}
