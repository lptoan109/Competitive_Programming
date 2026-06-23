#include <bits/stdc++.h>
using namespace std;
long long n, kq;
int main()
{
    cin >> n;
    for(long long i = 1; i*i<=n; ++i){
        if(n%i==0){
            if(n/i!=i) kq+=i;
            kq+=n/i;
            //cout << i << " " << n/i << " ";
        }
    }
    cout << kq;
    return 0;
}
