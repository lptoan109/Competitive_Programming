#include <bits/stdc++.h>
using namespace std;
long long n, ln = LONG_MIN, kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(long long i = 1; i*i<=n; ++i){
        kq++;
        if(n%(i*i)==0) ln = max(ln,i);
    }
    cout << kq << "\n" << ln;
    return 0;
}
