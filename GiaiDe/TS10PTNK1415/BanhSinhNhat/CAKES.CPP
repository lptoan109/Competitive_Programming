#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int a[MAXN+5], n, kq;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAKES.INP", "r", stdin);
    freopen("CAKES.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    kq = n;
    sort(a+1, a+1+n);
    int i = 1, j = (n+1)/2;
    while(i<=n/2 && j<=n){
        if(a[i]*2<=a[j]){
            kq--;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout << kq;
    return 0;
}
