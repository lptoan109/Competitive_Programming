#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5, MAXV = 1e3;
int n,k, a[MAXN+5], mk[MAXV+5];
void sub1(){
    int kq = 0;
    for(int i = 1; i<=n; ++i){
        if(mk[i]>0) kq++;
        mk[i]++;
    }
    cout << kq;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    if(k==1){
        sub1();
        return 0;
    }
    if(k==2){
        sub2();
        return 0;
    }
    return 0;
}
