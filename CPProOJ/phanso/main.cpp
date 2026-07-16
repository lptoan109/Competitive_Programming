#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
    return a.first/a.second < b.first/b.second;
}
int n;
vector<pair<int, int>> ps;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int t1, t2;
        cin >> t1 >> t2;
        if(t2!=0){
            int temp = __gcd(t1, t2);
            ps.push_back({t1/temp, t2/temp});
        }
    }
    sort(ps.begin(), ps.end(), compare);
    for(pair<int, int> i:ps) cout << i.first << "/" << i.second << "\n";
    return 0;
}
