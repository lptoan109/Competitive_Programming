#include <bits/stdc++.h>
using namespace std;
int x, y, kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT", "w", stdout);
    cin >> x >> y;
    if(x<y){
        for(int i = 1; i*i<=x; ++i){
            if(x%i==0 && y%i==0){
                kq++;
            }
            if(x/i!=i && x%(x/i)==0 && y%(x/i)==0){
                kq++;
            }
        }
    }
    else{
        for(int i = 1; i*i<=y; ++i){
            if(x%i==0 && y%i==0){
                kq++;
            }
            if(y/i!=i && x%(y/i)==0 && y%(y/i)==0){
                kq++;
            }
        }
    }
    cout << kq;
    return 0;
}
