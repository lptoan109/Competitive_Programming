#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
bool check(int k){
    if(k==2||k==3) return true;
    if(k%2==0||k%3==0||k<2) return false;
    for(int i = 2; i*i<=k; i+=5){
        if(k%i==0||k%(i+2)==0) return false;
    }
    return true;
}
int n,q,a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NGUYENTO.INP", "r", stdin);
    freopen("NGUYENTO.OUT", "w", stdout);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        bool c = check(t);
        if(c==false){
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
            if(check(so)) a[i]++;
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
