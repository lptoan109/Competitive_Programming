#include <bits/stdc++.h>
using namespace std;
bool check(string so){
    return (so[0]=='2' || so[0]=='0') && (so[3]=='2' || so[3]=='6') && (so[1]==so[2]);
}
const int MAXN = 1e5;
int n, q;
long long a[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i =1 ; i<=n; ++i){
        string so;
        cin >> so;
        if(check(so)) a[i]++;
        a[i]+=a[i-1];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << a[r]-a[l-1] << "\n";
    }
    return 0;
}
