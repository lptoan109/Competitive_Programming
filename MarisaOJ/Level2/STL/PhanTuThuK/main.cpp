#include <bits/stdc++.h>
using namespace std;
int n, q;
vector<int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    a.push_back(0);
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a.push_back(t);
    }
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int val;
            cin >> val;
            a.push_back(val);
        }
        else if(type == 2){
            a.pop_back();
        }
        else{
            int k;
            cin >> k;
            cout << a[k] << "\n";
        }
    }
    return 0;
}
