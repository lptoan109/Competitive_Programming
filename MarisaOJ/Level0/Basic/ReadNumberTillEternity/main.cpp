#include <bits/stdc++.h>
using namespace std;
int so;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> so){
        if(so==0) return 0;
        long long kq = 1;
        for(int i = 1; i<=5; ++i){
            kq*=so;
        }
        cout << kq << "\n";
    }
    return 0;
}
