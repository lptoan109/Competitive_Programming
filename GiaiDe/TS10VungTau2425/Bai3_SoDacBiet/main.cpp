#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
bool check(int k){
    int cs = 0, t = k;
    while(t>0){
        cs+=(t%10);
        t/=10;
    }
    if(k%cs==0){
        return true;
    }
    else{
        return false;
    }
}
int n, ps[MAXN+5], q;
bool a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a[i] = check(t);
    }
    for(int i = 1; i<=n; ++i){
        int temp;
        if(a[i]) temp = 1;
        else temp = 0;
        ps[i] = ps[i-1]+temp;
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        cout << ps[r]-ps[l-1] << "\n";
    }
    return 0;
}
