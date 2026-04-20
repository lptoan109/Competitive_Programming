#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6;
#define int long long
int n, q, a[MAXN+5];
long long kq, ps[MAXN+5];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+1+n);
    for(int i = 1; i<=n; ++i){
        ps[i] = ps[i-1]+a[i];
    }
//    for(int i = 1; i<=n; ++i){
//        cout << a[i] << " ";
//    }
//    cout << "\n";
//    for(int i = 1; i<=n; ++i){
//        cout << ps[i] << " ";
//    }
//    cout << "\n";
    int k = n;
    while(k>0){
        if(k<=2){
            for(int i = 1; i<=k; ++i){
                kq+=(a[i]*(1.0/100));
            }
            k=0;
        }
        if((ps[k]-ps[k-2])-(ps[k]-ps[k-2])*q/100<=a[k-2]){
            kq+=(ps[k]-ps[k-2]*(q/100.0));
            //cout << "1: " << k << " " << ps[k]-ps[k-2]*q/100 << "\n";
            k-=2;
        }
        else{
            kq+=(ps[k]-ps[k-3])-a[k-2];
            //cout << "2: " << k << " " << a[k-2] << "\n";
            k-=3;
        }
    }
    cout << kq;
    return 0;
}
