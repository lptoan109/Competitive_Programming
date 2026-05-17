#include <bits/stdc++.h>
using namespace std;
bool check(long long so){
    if(so==2 || so==3) return true;
    if(so<2 || so%2==0 || so%3==0) return false;
    for(long long i = 5; i*i<=so; i+=6){
        if(so%i==0 || so%(i+2)==0) return false;
    }
    return true;
}
long long n, kq= 1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        long long so;
        cin >> so;
        if(check(so)) kq = min(so, kq);
    }
    if(kq==1e18) cout << -1;
    else cout << kq;
    return 0;
}
