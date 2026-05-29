#include <bits/stdc++.h>
using namespace std;
bool check(long long so){
    if(so%2!=0) return false;
    int t = 0;
    while(so>0){
        t+=(so%10);
        so/=10;
    }
    return t%2==0;
}
long long l, r, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> l >> r;
    if(r<=1000000){
        for(long long i = l; i<=r; ++i){
            if(check(i)) kq++;
        }
        cout << kq;
        return 0;
    }
    else{

    }
    return 0;
}
