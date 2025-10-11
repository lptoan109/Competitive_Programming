#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("GIAIMA.INP", "r", stdin);
    freopen("GIAIMA.OUT", "w", stdout);
    string ketqua;
    char kt;
    int so;
    while(cin >> kt >> so){
        int t1 = (int)kt+so;
        if(t1>90) t1-=26;
        char t2 = char(t1);
        ketqua+=t2;
    }
    cout << ketqua;
    return 0;
}
