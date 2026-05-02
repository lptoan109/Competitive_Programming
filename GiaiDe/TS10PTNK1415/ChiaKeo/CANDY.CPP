#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
#define int long long
int a[MAXN+5], n, m, l, r;
void sub1(){
    for(int i = 1; i<=m; ++i){
        int nn = 1e9, nj;
        for(int j = 1; j<=n; ++j){
            if(a[j]<nn){
                nn = a[j];
                nj = j;
            }
        }
        a[nj]++;
    }
    for(int i = 1; i<=n; ++i){
        cout << a[i] << " ";
    }
}
void sub2(){
    l = 0;
    r += m;
    int x = 0;
    while(l<=r){
        int mid = l+(r-l)/2, t = 0;
        for(int i = 1; i<=n; ++i){
            if(a[i]<mid) t+=(mid-a[i]);
        }
        if(t<=m){
            x = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    int alrkeo = 0;
    for(int i = 1; i<=n; ++i){
        if(a[i]<x){
            alrkeo += (x-a[i]);
            a[i] = x;
        }
    }
    m-=alrkeo;
    for(int i = 1; i<=n; ++i){
        if(m>0 && a[i]==x){
            a[i]++;
            m--;
        }
    }
    for(int i = 1; i<=n; ++i) cout << a[i] << " ";
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CANDY.INP", "r", stdin);
    freopen("CANDY.OUT", "w", stdout);
    cin >> n >> m;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        r = max(r, a[i]);
    }
    if(n<=5000 && m<=5000){
        sub1();
        return 0;
    }
    else sub2();
    return 0;
}
