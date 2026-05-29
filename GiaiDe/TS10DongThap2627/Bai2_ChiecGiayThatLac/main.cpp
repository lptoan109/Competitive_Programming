#include <bits/stdc++.h>
using namespace std;
int n;
map<int, int> a;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i =1 ; i<=n; ++i){
        int val;
        cin >> val;
        a[val]++;
    }
    for(auto &i:a){
        if(i.second == 1){
            cout << i.first;
            return 0;
        }
    }
    cout << -1;
    return 0;
}
