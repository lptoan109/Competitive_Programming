#include <bits/stdc++.h>
using namespace std;
long long l,r;
void sub1(){
    long long kq = 0;
    for(long long i = l; i<=r; ++i){
        if((i*i-1)%5==0){
            kq++;
            //cout <<i <<" : " << i*i-1 << "\n";
        }
    }
    cout << kq;
}
void sub2(){
    long long a[5];
    a[1] = 1;
    a[2] = 4;
    a[3] = 6;
    a[4] = 9;
    long long lt = l%10, rt = r%10, vtl=0, vtr = 0;
    long long kq = ((r-rt)-(l-lt))/10*4;
    for(int i = 1; i<=4; ++i){
        if(lt>a[i]) vtl = i;
        if(rt>=a[i]) vtr = i;
    }
    //cout<< lt << " " << rt << " " << kq << " " << vtl << " " << vtr << "\n";
    kq = kq-vtl+vtr;
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
    else sub2();
    return 0;
}
