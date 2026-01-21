#include <bits/stdc++.h>
using namespace std;
const int limit = 2e7;
bool check[limit + 1];
void sang(){
    check[0] = check[1] = true;
    for(int i = 2; i*i<=limit; ++i){
        if(!check[i]){
            for(int j = i*i; j<=limit; j+=i){
                check[j] = true;
            }
        }
    }
}
int n,q, kq, a[limit+5];
int main()
{
    freopen("KHOIPHUC.INP", "r", stdin);
    freopen("KHOIPHUC.OUT", "w", stdout);
    sang();
    scanf("%d %d", &n, &q);
    int ps[n+1];
    while(q--){
        int l,r,v;
        scanf("%d %d %d", &l , &r, &v);
        a[l]+=v;
        a[r+1]-=v;
    }
    ps[0] = 0;
    for(int i = 1; i<=n; ++i){
        ps[i] = ps[i-1]+a[i];
    }
    for(int i = 1; i<=n; ++i){
        if(!check[ps[i]]) kq++;
    }
    printf("%d", kq);
    return 0;
}
