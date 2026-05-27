#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
bool check(int so){
    if(so==2 || so==3) return true;
    if(so<2 || so%2==0 || so%3==0) return false;
    for(int i = 5; i*i<=so; i+=6){
        if(so%i==0 || so%(i+2)==0) return false;
    }
    return true;
}
int n;
long long a[MAXN+5], kq, cnt[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 1; i<=MAXN; ++i){
        for(int j = i; j<=MAXN; j+=i){
            a[j]++;
        }
    }
    for(int i =1; i<=MAXN; ++i){
        if(check(a[i])) cnt[i]++;
    }
    for(int i = 1; i<=MAXN; ++i){
        cnt[i]+=cnt[i-1];
    }
    cin >> n;
    while(n--){
        int l ,r;
        cin >> l >> r;
        kq+=cnt[r]-cnt[l-1];
    }
    cout << kq;
    return 0;
}
