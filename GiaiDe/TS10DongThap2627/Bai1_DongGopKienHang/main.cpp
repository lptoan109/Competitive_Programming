#include <bits/stdc++.h>
using namespace std;
int n;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i*i<=n; ++i){
        if(n%i==0){
            if(i==n/i) kq++;
            else{
                kq+=2;
            }
        }
    }
    cout << kq;
    return 0;
}
