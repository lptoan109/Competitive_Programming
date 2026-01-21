#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
int n, q, sntnho[MAXN+5];
vector<int> pos[MAXN+5];
void sang(){
    for(int i = 2; i*i<=MAXN; ++i){
        if(sntnho[i] == 0){
            for(int j = i*i; j<=MAXN; j+=i){
                if(sntnho[j] == 0) sntnho[j] = i;
            }
        }
    }
    for(int i = 2; i<=MAXN; ++i){
        if(sntnho[i]==0) sntnho[i] = i;
    }
}
void pttsnt(int value, int idx){
    while(value>1){
        int p = sntnho[value];
        pos[p].push_back(idx);
        while(value%p==0) value/=p;
    }
}
int main()
{
    freopen("NHAP.INP", "r", stdin);
    scanf("%d %d", &n, &q);
    sang();
    for(int i = 1; i<=n; ++i){
        int x;
        scanf("%d", &x);
        pttsnt(x,i);
    }
    while(q--){
        int l,r,p;
        scanf("%d %d %d", &l,&r,&p);
        if(pos[p].empty()){
            printf("NO\n");
            continue;
        }
        auto it1 = lower_bound(pos[p].begin(), pos[p].end(), l);
        auto it2 = upper_bound(pos[p].begin(), pos[p].end(), r);
        int cnt = distance(it1, it2);
        if(cnt == (r-l+1)){
            printf("YES\n");
            continue;
        }
        else{
            printf("NO\n");
            continue;
        }
    }
    return 0;
}
