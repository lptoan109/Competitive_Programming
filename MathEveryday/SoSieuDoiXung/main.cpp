#include <bits/stdc++.h>
using namespace std;
bool kt(long long n){
    long long t = 0;
    while(n>0){
        t+=n%10;
        n/=10;
    }
    if(t%2==0||t%3==0||t<2) return false;
    if(t==2||t==3) return true;
    for(int i = 2; i*i<=t; i+=5){
        if(t%i==0&&t%(i+2)==0) return false;
    }
    return true;
}
bool dx(long long n){
    int check = n%10;
    n/=10;
    while(n>0){
        int cs = n%10;
        if(cs!=check) return false;
        n/=10;
    }
    return true;
}
long long l,r, bd, kq, k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r >> k;
    for(long long i = l; i<=r; ++i){
        if(dx(i)==true){
            bd = i;
            break;
        }
    }
    if(bd==0){
        cout << 0;
        return 0;
    }
    if(kt(bd)==true) kq++;
    for(long long i = bd*2; i<=r; i+=bd){
        if(kt(i)==true) kq++;
    }
    cout << kq;
    return 0;
}
