#include <bits/stdc++.h>
using namespace std;
int n, a[105], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i= 1; i<=n; ++i) cin >> a[i];
    for(int i = n-1; i>=1; --i){
        bool notok = false;
        for(int j = i+1; j<=n; ++j){
            if(a[j]>=a[i]){
                notok = true;
                break;
            }
        }
        kq+=(!notok?1:0);
    }
    cout << kq;
    return 0;
}
