#include <bits/stdc++.h>
using namespace std;
string s;
int kq, cur;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    char t = 't';
    for(char i:s){
        if(i!=t){
            cur = 1;
        }
        else{
            cur++;
        }
        t = i;
        kq = max(kq, cur);
    }
    cout << kq;
    return 0;
}
