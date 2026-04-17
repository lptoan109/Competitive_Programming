#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
long long kq, n, a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    if(n==1 || n==2){
        cout << 1;
        return 0;
    }
    a[1] = 1;
    a[2] = 1;
    for(int i = 3; i<=n; ++i){
        for(int j = 1; j<i; ++j){
            a[i] += a[j];
        }
        if(i%2!=0) a[i]++;
    }
    for(int i = 1; i<=n; ++i){
        cout << a[i] << "\n";
        kq+=a[i];
    }
    cout << kq;
    return 0;
}
