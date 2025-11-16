#include <bits/stdc++.h>
using namespace std;
int t,n, ln=0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //freopen("A.INP", "r", stdin);
    cin >> t;
    for(int i = 1; i<=t; ++i){
        cin >> n;
        int a[n];
        for(int j = 0; j<n; ++j){
            cin >> a[j];
            if(a[j]>ln) ln = a[j];
        }
        cout << ln << "\n";
        ln = 0;
    }
    return 0;
}
