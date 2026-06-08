#include <bits/stdc++.h>
using namespace std;
int n, speednn, speedln = 1005;
pair <int, int> bd, kt;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    cin >> n;
    for(int i = 1; i<=n; ++i){
        string type;
        int val1, val2;
        cin >>  type >> val1 >> val2;
        if(type == "on"){
            bd = {val1, val2};
        }
        else if(type == "off"){
            kt = {val1, val2};
        }
        else{
            speednn = max(val1, speednn);
            speedln = min(val2, speedln);
        }
    }
    cout << speednn - bd.first << " " << speedln - bd.second << "\n";
    cout << speednn - kt.second << " " << speedln - kt.first << "\n";
    return 0;
}
