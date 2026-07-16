#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int sum[MAXN+5];
void pre(){
    for(int i = 1; i<=MAXN/2; ++i){
        for(int j = 2*i; j<=MAXN; j+=i){
            sum[j]+=i;
            //if()
        }
    }
}
int a,b;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("nhap.INP", "r", stdin);
    //freopen("xuat.OUT", "w", stdout);
    cin >> a >> b;
    pre();
    for(int i = a; i<=b; ++i){
        kq+=abs(i-sum[i]);
    }
    cout << kq;
    return 0;
}
