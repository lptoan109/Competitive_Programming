#include <bits/stdc++.h>
using namespace std;
string s;
long long kq;
unordered_map<char, int> cnt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    for(char i:s){
        cnt[i]++;
    }
    for(auto &i:cnt){
        if(i.second%2!=0) kq++;
    }
    if(kq==0) cout << 1;
    else cout << kq;
    return 0;
}
