#include <bits/stdc++.h>
using namespace std;
string x;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SNN.INP", "r", stdin);
    freopen("SNN.OUT", "w", stdout);
    cin >> x;
    bool check = next_permutation(x.begin(), x.end());
    if(check){
        cout << x;
    }
    else cout << 0;
    return 0;
}
