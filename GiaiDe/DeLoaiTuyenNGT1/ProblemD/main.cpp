#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ProblemD.INP", "r", stdin);
    freopen("ProblemD.OUT", "w", stdout);
    cin >> n;
    for(long long i = 2; i*i<=n; ++i){
        if(n%i==0) kq++;
    }
    cout << kq;
    return 0;
}
