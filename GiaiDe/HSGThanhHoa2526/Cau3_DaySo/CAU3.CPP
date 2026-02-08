#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2e5;
int n,m, a[MAXN+5];
void sub1(){
    while(m--){
        if(a[1]<a[2]) a[1]++;
        else a[2]++;
    }
    cout << min(a[1],a[2]);
}
void solution(){
    while(m--){
        a[1]++;
        int i = 1;
        while(i<n&&a[i]>a[i+1]){
            swap(a[i], a[i+1]);
            i++;
        }
    }
    cout << a[1];
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU3.INP", "r", stdin);
    freopen("CAU3.OUT", "w", stdout);
    cin >> n >> m;
    bool gn = true;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
        if(i>1&& gn==true){
            if(a[i]!=a[i-1]){
                gn = false;
            }
        }
    }
    sort(a+1,a+1+n);
    if(m==0){
        cout << a[1];
        return 0;
    }
    if(m<=1){
        a[1]++;
        int i = 1;
        while(a[i]>a[i+1]&&i<n){
            i++;
        }
        cout << a[i];
        return 0;
    }
    if(n==2){
        sub1();
        return 0;
    }
    if(gn == true){
        if(m<n){
            cout << a[1];
        }
        if(m==n) cout << a[1]+1;
        int sl = m/n;
        cout << a[1]+sl;
        return 0;
    }
    solution();
    return 0;
}
