#include <bits/stdc++.h>
using namespace std;
map<int, int> d,c;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 1; i<=3; ++i){
        int td, tc;
        cin >> td >> tc;
        d[td]++;
        c[tc]++;
    }
    for(auto &i:d){
        if(i.second<2){
            cout << i.first << " ";
            break;
        }
    }
    for(auto &i:c){
        if(i.second<2){
            cout << i.first;
            return 0;
        }
    }
    return 0;
}
