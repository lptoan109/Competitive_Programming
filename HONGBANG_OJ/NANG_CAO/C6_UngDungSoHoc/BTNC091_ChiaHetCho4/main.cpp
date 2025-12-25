#include <bits/stdc++.h>
using namespace std;
string s;
long long kq=0, t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> s;
    int sl = s.size();
    for(int i = 0; i<sl; ++i){
        int so = s[i]-'0';
        if(so%4==0) kq++;
        if(i>0){
            t = (s[i-1]-'0')*10 + so;
            if(t%4==0) kq+=i;
        }
    }
    cout << kq;
    return 0;
}
