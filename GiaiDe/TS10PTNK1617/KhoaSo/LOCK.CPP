#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
int n, m, a[MAXN+5];
void s1(){
    for(int i = 1; i<=n; ++i){
        a[i]++;
        if(a[i]==10) a[i] = 0;
    }
}
void s2(){
    int t1 = a[1], t2;
    a[1] = a[n];
    for(int i = 2; i<=n; ++i){
        t2 = a[i];
        a[i] = t1;
        t1 = t2;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LOCK.INP", "r", stdin);
    freopen("LOCK.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        char t;
        cin >> t;
        a[i] = t-'0';
    }
    cin >> m;
    for(int i = 1; i<=m; ++i){
        char t;
        cin >> t;
        if(t=='1'){
            s1();
        }
        else s2();
    }
    for(int i = 1; i<=n; ++i){
        cout << a[i];
    }
    return 0;
}
