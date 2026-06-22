#include <bits/stdc++.h>
using namespace std;
int n;
long long t1 = 1, t2 = 0, kq;
int main()
{
    cin >> n;
    for(int i = 2; i<=n; ++i){
        kq=t1+t2;
        t2 = t1;
        t1 = kq;
        //cout << i << " : " << kq << "\n";
    }
    cout << kq;
    return 0;
}
