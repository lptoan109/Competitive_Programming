#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6, MAXV = 1e7;
bool notsnt[MAXV];
void sang(){
    notsnt[0] = notsnt[1] = true;
    for(int i = 2; i*i<=MAXV; ++i){
        if(!notsnt[i]){
            for(int j = i*i; j<=MAXV; j+=i){
                notsnt[j] = true;
            }
        }
    }
}
int n,q,a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NGUYENTO.INP", "r", stdin);
    freopen("NGUYENTO.OUT", "w", stdout);
    cin >> n >> q;
    sang();
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        if(t<2||notsnt[t]==true){
            a[i] = 0;
            continue;
        }
        else{
            int so = 0;
            while(t>0){
                int cs = t%10;
                so = so*10+cs;
                t/=10;
            }
            if(!notsnt[so]) a[i]++;
        }
    }
    int ps[n+1];
    ps[0] = 0;
    for(int i = 1; i<=n; ++i){
        ps[i] = ps[i-1]+a[i];
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << ps[r]-ps[l-1] << "\n";
    }
    return 0;
}
