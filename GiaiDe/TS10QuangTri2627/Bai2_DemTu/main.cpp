#include <bits/stdc++.h>
using namespace std;
map<string, int> cnt;
int kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(cin >> s){
        cnt[s]++;
        kq = max(kq, cnt[s]);
    }
    cout << kq;
    return 0;
}
