#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int n, a[MAXN+5];
void sub1(){
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    int kq = -1e9,l,r;
    for(int i = 1; i<=n; ++i){
        int cur = 0;
        for(int j = i; j<=n; ++j){
            cur+=a[j];
            if(cur>=kq){
                l = i;
                r = j;
                kq = cur;
            }
        }
    }
    for(int i = l; i<=r; ++i){
        cout << a[i] << " ";
    }
}
void sub2(){
    int cur = 0, kq = -1e9, l = 1,r = 1;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        cur+=a[i];
        if(cur<0){
            l = i;
            cur = a[i];
        }
        if(cur>=kq){
            r = i;
            kq = cur;
        }
    }
    for(int i = l; i<=r; ++i) cout << a[i] << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("KANADE.INP", "r", stdin);
    freopen("KANADE.OUT", "w", stdout);
    cin >> n;
    if(n<=1000) sub1();
    else sub2();
    return 0;
}
