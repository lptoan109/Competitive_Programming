#include <bits/stdc++.h>
using namespace std;
bool compare(pair<char, int>a, pair<char, int>b){
    if(a.first==b.first) return a.second>b.second;
    return a.first>b.first;
}
int n;
vector <pair<char, int>>a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i<n; ++i){
        int x;
        cin >> x;
        string t = to_string(x);
        a.push_back({t[0],x});
    }
    sort(a.begin(), a.end(), compare);
    for(auto &i:a){
        cout << i.second;
    }
    return 0;
}
