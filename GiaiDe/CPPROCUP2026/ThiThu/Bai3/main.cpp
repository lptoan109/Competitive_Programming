#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
int n, q;
map<char, vector<int>> a;
vector<int> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        string s;
        cin >> s;
        for(char j:s){
            a[j].push_back(i);
        }
    }
    for(auto &i:a){
        sort(i.second.begin(), i.second.end());
    }
    while(q--){
        char t;
        cin >> t;
        vector<int> temp = a[t];
        for(int i:temp){
            if(!binary_search(kq.begin(), kq.end(), i)){
                kq.push_back(i);
            }
        }
        cout << n-kq.size() << "\n";
    }
    return 0;
}
