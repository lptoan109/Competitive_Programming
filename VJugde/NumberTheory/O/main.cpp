#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int t = 1, kq = 4;
    while(t<n){
        if(kq<10) t++;
        else if(kq<100) t+=2;
        else if(kq<1000) t+=3;
        else if(kq<10000) t+=4;
        kq++;
    }
    if(t>n) cout << kq-1;
    else cout << kq;
    return 0;
}
