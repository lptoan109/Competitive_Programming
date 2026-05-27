#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, a[MAXN+5], vt, t[MAXN+5], a1[MAXN+5], a2[MAXN+5];
void sub1(){
    long long kqt = 1e18;;
    for(int vt = 2; vt<n; ++vt){
        for(int i = 1; i<=n; ++i) t[i] = a[i];
        long long kq = 0;
        for(int i = 2; i<=vt; ++i){
            if(t[i]<=t[i-1]){
                kq+=(t[i-1]+1-t[i]);
                t[i]+=(t[i-1]+1-t[i]);
            }
        }
        for(int i = n-1; i>=vt; --i){
            if(t[i]<=t[i+1]){
                kq+=(t[i+1]+1-t[i]);
                t[i]+=(t[i+1]+1-t[i]);
            }
        }
        if(kqt>kq){
            kqt = kq;
//            for(int i = 1; i<=n; ++i) cout << t[i] << " ";
//            cout << "\n";
        }
    }

    if(kqt==(long long)1e18){
        cout << 0;
    }
    else cout << kqt;
}
long long sf[MAXN+5], pf[MAXN+5], kq = 1e18;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAPNUI.INP", "r", stdin);
    freopen("DAPNUI.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        a1[i] = a[i];
        a2[i] = a[i];
    }
//    if(n<=(int)1e3){
//        sub1();
//        return 0;
//    }
    for(int i = 2; i<=n; ++i){
        if(a1[i-1]>=a1[i]){
            pf[i] = a1[i-1]+1-a1[i]+pf[i-1];
            a1[i] += a1[i-1]+1-a1[i];
        }
    }

    for(int i = n-1; i>=1; --i){
        if(a2[i+1]>=a2[i]){
            sf[i] = a2[i+1]+1-a2[i]+sf[i+1];
            a2[i] += a2[i+1]+1-a2[i];
        }
    }
    for(int i = 1; i<=n; ++i){
        cout << pf[i] << " ";
    }
    cout << "\n";
    for(int i = 1; i<=n; ++i){
        cout << sf[i] << " ";
    }
    cout << "\n";
    for(int i = 2; i<n; ++i){
        kq = min(kq, pf[i]+sf[i]+a[i]-min(a1[i], a2[i]));
    }
    cout << kq;
    return 0;
}
