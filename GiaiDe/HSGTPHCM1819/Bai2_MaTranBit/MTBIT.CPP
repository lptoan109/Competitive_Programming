#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2048;
vector<vector<int>> a;
string kq = "";
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MTBIT.INP", "r", stdin);
    freopen("MTBIT.OUT", "w", stdout);
    string temp;
    while(cin >> temp){
        vector <int> row;
        for(char i:temp){
            int number = i-'0';
            row.push_back(number);
        }
        kq = max(kq, temp);
        a.push_back(row);
        n = temp.size();
    }
    for(int i = 0; i<n; ++i){
        string t;
        for(int j = 0; j<n; ++j){
            t += (a[j][i]+'0');
        }
        kq = max(kq, t);
    }
    cout << kq;
    return 0;
}
