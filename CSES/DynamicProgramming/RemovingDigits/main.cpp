#include <bits/stdc++.h>
using namespace std;
int csnn(int n){
    int cs = 0;
    while(n>0){
        cs = max(cs, n%10);
        n/=10;
    }
    return cs;
}
int n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    while(n>0){
        n-=csnn(n);
        kq++;
    }
    cout << kq;
    return 0;
}
