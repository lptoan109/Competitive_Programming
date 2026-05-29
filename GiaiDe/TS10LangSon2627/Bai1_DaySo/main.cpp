#include <bits/stdc++.h>
using namespace std;
long long n, kq1, kq2 = 1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        long long t;
        cin >> t;
        if(t<0) kq1+=t;
        else if(t>0) kq2 = min(kq2, t);
    }
    cout << kq1 << "\n" << kq2;
    return 0;
}
