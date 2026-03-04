#include <bits/stdc++.h>
using namespace std;
int k;
string n, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NEXTK.INP", "r", stdin);
    freopen("NEXTK.OUT", "w", stdout);
    cin >> k >> n;
    kq = n;
    while(k--){
        if(next_permutation(n.begin(), n.end())) kq = n;
        else{
            cout << kq;
            return 0;
        }
    }
    cout << kq;
    return 0;
}
