#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BIT05.INP", "r", stdin);
    freopen("BIT05.OUT", "w", stdout);
    cin >> t;
    //cout << t << "\n";
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        ll n;
        ss>>n;
        ll k;
        while(ss>>k){
            //cout << n << " ";
            n^=(1ULL<<k);
        }
        cout << n << "\n";
    }
    return 0;
}
