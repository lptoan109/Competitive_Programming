#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cin >> n;
    for(long long i = 1; i*i<=n; ++i){
        if(n%i==0){
            kq++;
            if(i!=n/i) kq++;
        }
    }
    cout << kq;
    return 0;
}
