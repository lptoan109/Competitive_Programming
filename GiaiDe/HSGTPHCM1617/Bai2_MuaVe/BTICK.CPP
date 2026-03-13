#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
ll n,k,p1,p2;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BTICK.INP", "r", stdin);
    freopen("BTICK.OUT", "w", stdout);
    cin >> n >> k >> p1 >> p2;
    if(k>=n){
        if(p1*n >= p2){
            cout << p2;
            return 0;
        }
        else{
            cout << p1*n;
            return 0;
        }
    }
    else{
        int sd = n/k;
        if(p2*sd <= p1*k*sd){
            cout << p2*sd + (p1*(n-k*sd));
            return 0;
        }
        else{
            cout << p1*n;
            return 0;
        }
    }
    return 0;
}
