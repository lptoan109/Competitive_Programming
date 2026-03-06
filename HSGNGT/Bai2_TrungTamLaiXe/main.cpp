#include <bits/stdc++.h>
using namespace std;
long long n, t,kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        kq = 480;
        cin >> t;
        kq+=t;
        int gio = kq/60, p = kq%60;
        if(p<10){
            cout <<"0" << gio << ":0" << p << "\n";
        }
        else{
            cout <<"0" << gio << ":" << p << "\n";
        }
    }
    return 0;
}
