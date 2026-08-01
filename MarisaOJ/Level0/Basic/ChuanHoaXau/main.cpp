#include <bits/stdc++.h>
using namespace std;
string s;
vector<string> vec;
void solve()
{
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s){
        s[0] = toupper(s[0]);
        for(int i = 1; i<s.size(); ++i){
            s[i] = tolower(s[i]);
        }
        vec.push_back(s);
    }
    int n = vec.size();
    for(int i = 0; i<n-1; ++i) cout << vec[i] << " ";
    cout << vec[n-1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
