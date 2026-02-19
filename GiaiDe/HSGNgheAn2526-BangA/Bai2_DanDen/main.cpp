#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n,k, a[MAXN+5], cntx, cntd;
void sub1(){
    for(int i = 2; i<=n; ++i){
        if(a[i]==0 && a[i-1]==0){
            cout << cntx+2;
            return;
        }
    }
    cout << cntx;
}
void sub2(){

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DANDEN.INP", "r", stdin);
    freopen("DANDEN.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(a[i]==0) cntd++;
        else cntx++;
    }
    if(k==1){
        if(cntd==0){
            cout << cntx-1;
        }
        else{
            cout << cntx+1;
        }
        return 0;
    }
    if(k==2){
        if(cntd<2){
            cout << cntx;
            return 0;
        }
        sub1();
        return 0;
    }
    sub2();
    return 0;
}
