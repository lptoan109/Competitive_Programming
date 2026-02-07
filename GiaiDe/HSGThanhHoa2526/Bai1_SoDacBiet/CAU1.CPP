#include <bits/stdc++.h>
using namespace std;
long long l,r;
void sub1(){
    long long kq = 0;
    for(long long i = l; i<=r; ++i){
        if((i*i-1)%5==0) kq++;
    }
    cout << kq;
}
int check = 1e6;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    cin >> l >> r;
    if(l<=check&&r<=check){
        sub1();
    }
    //else sub2();
    return 0;
}
