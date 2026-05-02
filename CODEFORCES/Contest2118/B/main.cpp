#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
        int n = 7, a[10], kq = 0;
        for(int i = 1; i<=n; ++i){
            cin >> a[i];
        }
        sort(a+1, a+1+n);
        for(int i = 1; i<=n; ++i){
            if(i<=6) a[i]*=(-1);
            kq += a[i];
        }
        cout << kq << "\n";
    }
    return 0;
}
