#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int main()
{
    int n,t;
    cin >> n;
    for(int i = 0; i<n; ++i){
        cin >> t;
        a.push_back(t);
    }
    reverse(a.begin(), a.end());
    for(auto i:a) cout << i << " ";
    cout << "\n";
    reverse(a.begin()+l, a.begin()+r+1);
    for(auto i:a) cout << i << " ";
    return 0;
}
