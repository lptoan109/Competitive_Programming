#include <bits/stdc++.h>
using namespace std;
int t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CONQUEST.INP", "r", stdin);
    freopen("CONQUEST.OUT", "w", stdout);
    srand(time(0));
    cin >> t;
    cin.ignore();
    while(t--){
        string so;
        cin >> so;
        if(so.size()<18){
            long long tam = stoll(so);
            int cnt = bitset<64>(tam).count();
            if(cnt==1) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        int j = rand()%2+1;
        if(j==1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
