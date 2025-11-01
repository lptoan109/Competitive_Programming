#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
    int n , t;
    cin >> n >> t;
    for(int i = 0; i<n; ++i){
        cin >> t;
        a.push_back(t);
    }
    sort(a.begin(), a.end());
    for(auto i: a) cout << i << " ";
    cout << "\n";
    sort(a.begin(), a.end(), greater<int>());
    for(auto i: a) cout << i << " ";
    return 0;
}
