#include <bits/stdc++.h>
using namespace std;
int n;
void sub1(int m){
    bool gn = true;
    int a[m+5];
    for(int i = 1; i<=m; ++i){
        if(i>1 && a[i]!=a[1]) gn = false;
        cin >> a[i];
    }
    if(gn){
        cout << 0 << " ";
        return;
    }
    for(int i = 1; i<=m; ++i){
        bool nh,lh;
        nh = lh = false;
        int cnta, cntb;
        cnta = cntb = 0;
        for(int j = 1; j<=m; ++j){
            if(i==j) continue;
            if(a[j]>a[i]){
                cntb++;
                lh = true;
            }
            if(a[j]<a[i]){
                cnta++;
                nh = true;
            }
        }
        if(nh&&lh&&cnta == cntb){
            cout << 1 << " ";
            return;
        }
    }
    cout << 0 << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SET.INP", "r", stdin);
    freopen("SET.OUT", "w", stdout);
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        if(n<=10&&m<=1000){
            sub1(m);
            continue;
        }
    }
    return 0;
}
