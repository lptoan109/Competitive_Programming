#include <bits/stdc++.h>
using namespace std;
int n, q;
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a.push_back(t);
    }
    while(q--){
        int idx, val;
        cin >> idx >> val;
        a.insert(a.begin()+idx-1, val);
        for(int i:a) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
