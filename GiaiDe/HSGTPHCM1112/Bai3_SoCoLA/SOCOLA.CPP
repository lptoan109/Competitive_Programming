#include <bits/stdc++.h>
using namespace std;
int k, l=1, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SOCOLA.IN", "r", stdin);
    freopen("SOCOLA.OUT", "w", stdout);
    cin >> k;
    while(l<k) l*=2;
    cout << l << " ";
    if(l==k){
        cout << 0;
        return 0;
    }
    while(k>0){
        if(k%l==0){
            break;
        }
        l/=2;
        kq++;
        if(k>=l){
            k-=l;
        }
    }
    cout << kq;
    return 0;
}
