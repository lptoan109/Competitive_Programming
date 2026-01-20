#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5, limit = 1e6;
int snt[limit+5];
void sang(){
    for(int i = 2; i<=limit; ++i){
        if(snt[i]==0){
            for(int j = i; j<=limit; j+=i){
                snt[j] = max(snt[j], i);
            }
        }
    }
}
int n,q, a[MAXN];
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%d %d", &n,&q);
    sang();
    for(int i = 1; i<=n; ++i){
        int x;
        scanf("%d", &x);
        a[i] = snt[x];
    }
    long long ps[n+1];
    ps[0] = 0;
    for(int i = 1; i<=n; ++i){
        ps[i] = ps[i-1]+a[i];
    }
    while(q--){
        int l,r;
        scanf("%d %d", &l, &r);
        long long t = ps[r] - ps[l-1];
        if(t%2==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
