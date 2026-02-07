#include <bits/stdc++.h>
using namespace std;
string n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("NEXTNUM.INP", "r", stdin);
    freopen("NEXTNUM.OUT", "w", stdout);
    cin >> n;
    string t = n;
    bool kt = next_permutation(t.begin(), t.end());
    if(kt==false){
        cout << n;
    }
    else cout << t;
    return 0;
}
