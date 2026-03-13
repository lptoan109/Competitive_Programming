#include <bits/stdc++.h>
using namespace std;
string a,b;
long long kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("2MULT.INP", "r", stdin);
    freopen("2MULT.OUT", "w", stdout);
    cin >> a >> b;
    int gha = a.size(), ghb = b.size();
    for(int i = 0; i<ghb; ++i){
        for(int j = 0; j<gha; ++j){
            kq+=((b[i]-'0')*(a[j] - '0'));
        }
    }
    cout << kq;
    return 0;
}
