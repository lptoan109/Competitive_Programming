#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("2114A.INP","r", stdin);
    //freopen("2114B.OUT","w", stdout);
    int t;
    cin >> t;
    for(int i = 1; i<=t; ++i){
        string ta;
        cin >> ta;
        int nam = stoi(ta);
        double k = sqrt(nam);
        if(k==(int)k) cout << 0 << " " << k <<"\n";
        else cout << -1 << "\n";
    }
    return 0;
}
