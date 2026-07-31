#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
long long a[MAXN+5], n , kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(i>1){
            if(a[i]<a[i-1]){
                long long t = (a[i-1]-a[i]);
                kq+=t;
                a[i]+=t;
            }
        }
    }
    cout << kq;
    return 0;
}
