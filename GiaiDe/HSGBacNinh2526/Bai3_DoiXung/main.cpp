#include <bits/stdc++.h>
using namespace std;
string s;
int checkdx(string s,int l, int r){
    int gh = s.size();
    while(l>=0&&r<gh&&s[l]==s[r]){
        l--;
        r++;
    }
    return r-l-1;
}
int kq = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DOIXUNG.INP", "r", stdin);
    freopen("DOIXUNG.OUT", "w", stdout);
    cin >> s;
    int gh = s.size();
    for(int i = 0; i<gh; ++i){
        int th1 = mr(s,i-1, i+1);
        int th2 = mr(s,i, i+1);
        kq = max(kq,max(th1,th2));
    }
    cout << kq;
    return 0;
}
