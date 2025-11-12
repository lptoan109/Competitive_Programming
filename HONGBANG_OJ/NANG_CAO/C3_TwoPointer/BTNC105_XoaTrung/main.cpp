#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e7;
int n, a[MAXN+5], s=0;

int Slow_Fast(){
    for(int i = 0; i<n; ++i){
        if(a[s]!=a[i]){
            s++;
            a[s] = a[i];
        }
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("SAF.INP", "r", stdin);
    cin >> n;
    for(int i = 0; i<n; ++i) cin >> a[i];
    sort(a,a+n);
    cout << Slow_Fast()+1;
    return 0;
}
