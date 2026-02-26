#include <bits/stdc++.h>
using namespace std;
map <int,int> a;
int kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SODU.INP", "r", stdin);
    freopen("SODU.OUT", "w", stdout);
    for(int i = 1; i<=10; ++i){
        int t;
        cin >> t;
        int sd = t%42;
        //cout << sd << " ";
        if(a.find(sd)==a.end()){
            kq++;
        }
        a[sd]++;
    }
    //cout << "\n";
    cout << kq;
    return 0;
}
