#include <bits/stdc++.h>
using namespace std;
string s, kq="-1";
map<string, int> cnt;
bool check;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    int t = 0;
    for(char i:s){
        t+=i-'0';
        if(i=='0') check = true;
    }
    if(t%3!=0 || !check){
        cout << -1;
        return 0;
    }
    n = s.size();
    sort(s.begin(), s.end());
    do{
        if(cnt.find(s)!=cnt.end()){
            break;
        }
        if(s[n-1]=='0'){
            kq = s;
        }
        cnt[s]++;
    }
    while(next_permutation(s.begin(), s.end()));
    cout << kq;
    return 0;
}
