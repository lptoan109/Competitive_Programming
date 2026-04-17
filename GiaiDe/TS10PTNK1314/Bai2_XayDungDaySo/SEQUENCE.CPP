#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SEQUENCE.INP", "r", stdin);
    freopen("SEQUENCE.OUT", "w", stdout);
    cin >> n;
    int idx, val;
    cin >> idx >> val;
    a.push_back(val);
    for(int i = 2; i<=n; ++i){
        cin >> idx >> val;
        if(idx>a.size()) a.push_back(val);
        else a.insert(a.begin()+idx, val);
    }
    for(int i = 0; i<n; ++i){
        cout << a[i] << " ";
    }
    return 0;
}
