#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    long long kq1 = n, kq2 = 0;
    while(n!=1){
        if(n%2==0) n/=2;
        else n+=3;
        kq1= max(kq1, n);
        kq2++;
    }
    cout << kq2 << kq1;
    return 0;
}
