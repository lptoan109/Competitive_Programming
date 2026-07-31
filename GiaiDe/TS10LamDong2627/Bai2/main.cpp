#include <bits/stdc++.h>
using namespace std;
string s;
int kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    for(char i:s){
        kq+=(i-'0');
    }
    cout << kq;
    return 0;
}
