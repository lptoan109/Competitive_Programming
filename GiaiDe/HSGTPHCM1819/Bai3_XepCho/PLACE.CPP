#include <bits/stdc++.h>
using namespace std;
int n, a[5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("PLACE.INP", "r", stdin);
    freopen("PLACE.OUT", "w", stdout);
    cin >> n;
    for(int i = 0; i<n; ++i){
        int t;
        cin >> t;
        a[t]++;
    }
    kq+=a[4];
    if(a[1]<=a[3]){
        kq+=a[1];
        a[3]-=a[1];
        kq+=a[3];
        kq+=(a[2]/2);
        kq+=(a[2]%2);
        cout << kq;
        return 0;
    }
    else{
        kq+=a[3];
        a[1]-=a[3];
        kq+=(a[2]/2);
        a[2]%=2;
        if(a[1]<=a[2]){
            kq+=a[1];
            kq+=(a[2]-a[1]);
        }
        else{
            kq+=a[2];
            kq+=(a[1]-a[2]);
        }
        cout << kq;
    }
    return 0;
}
