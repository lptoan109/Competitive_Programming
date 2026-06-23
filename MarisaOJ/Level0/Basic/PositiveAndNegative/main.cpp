#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> ne, po;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        if(t<0) ne.push_back(t);
        else po.push_back(t);
    }
    int na = ne.size(), nb = po.size();
    for(int i = 0; i<max(na, nb); ++i){
        if(i<na) cout << ne[i] << " ";
        if(i<nb) cout << po[i] << " ";
    }
    return 0;
}
